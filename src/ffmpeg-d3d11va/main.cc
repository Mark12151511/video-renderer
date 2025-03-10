#include "main_window.h"
#include "av_demuxer.h"
#include "d3d11va_decoder.h"
#include "d3d11va_renderer.h"
#include <thread>

#pragma comment(lib, "avformat.lib")
#pragma comment(lib, "avcodec.lib")
#pragma comment(lib, "avutil.lib")
#pragma comment(lib, "d3dcompiler.lib")
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")

static void GetWindowSize(HWND hwnd, int& width, int& height)
{
	RECT rect;
	GetWindowRect(hwnd, &rect);
	width = static_cast<int>(rect.right - rect.left);
	height = static_cast<int>(rect.bottom - rect.top);
}

int main(int argc, char** argv)
{
	MainWindow window;
	if (!window.Init(100, 100, 1920 * 4 / 5, 1080 * 4 / 5)) {
		return -1;
	}

	D3D11VARenderer renderer;
	if (!renderer.Init(window.GetHandle())) {
		return -2;
	}

	//renderer.SetSharpen(0.5);

	int original_width = 0, original_height = 0;
	GetWindowSize(window.GetHandle(), original_width, original_height);

	bool abort_request = false;
	std::string pathname = "piper.h264";

	std::thread decode_thread([&abort_request, &renderer, pathname] {
		AVDemuxer demuxer;
		AVDecoder decoder;
		AVStream* video_stream = nullptr;

		if (!demuxer.Open(pathname)) {
			abort_request = true;
		}

		video_stream = demuxer.GetVideoStream();

		if (!decoder.Init(video_stream, renderer.GetDevice())) {
			abort_request = true;
		}

		AVPacket av_packet1, * av_packet = &av_packet1;
		AVFrame* av_frame = av_frame_alloc();
		
		while (!abort_request) {
			int ret = demuxer.Read(av_packet);
			if (ret >= 0) {
				if(av_packet->stream_index == video_stream->index && 
					!(video_stream->disposition & AV_DISPOSITION_ATTACHED_PIC)) {
					ret = decoder.Send(&av_packet1);
					while (ret >= 0) {
						ret = decoder.Recv(av_frame);
						if (ret >= 0) {
							renderer.RenderFrame(av_frame);
						}					
					}
					Sleep(33);
				}
				av_packet_unref(av_packet);		

				if (demuxer.IsEOF()) {
					demuxer.Close();
					demuxer.Open(pathname);
				}
			}
		}

		av_frame_free(&av_frame);
	});

	MSG msg;
	ZeroMemory(&msg, sizeof(msg));

	while (msg.message != WM_QUIT) {
		if (::PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE)) {
			::TranslateMessage(&msg);
			::DispatchMessage(&msg);
			continue;
		}
		else {
			int current_width = 0, current_height = 0;
			GetWindowSize(window.GetHandle(), current_width, current_height);
			if (current_width != original_width || current_height != original_height) {
				original_width = current_width;
				original_height = current_height;
				renderer.Resize();
			}
			Sleep(1);
		}		
	}

	abort_request = true;
	decode_thread.join();

	return 0;
}
