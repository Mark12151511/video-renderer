#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim      HLSL Bind  Count
// ------------------------------ ---------- ------- ----------- -------------- ------
// LinearSampler                     sampler      NA          NA             s0      1 
// YTexture                          texture  float4          2d             t0      1 
// UTexture                          texture  float4          2d             t1      1 
// VTexture                          texture  float4          2d             t2      1 
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_POSITION              0   xyzw        0      POS   float       
// TEXCOORD                 0   xy          1     NONE   float   xy  
// COLOR                    0   xyzw        2     NONE   float       
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_TARGET                0   xyzw        0   TARGET   float   xyzw
//
ps_4_0
dcl_sampler s0, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_resource_texture2d (float,float,float,float) t1
dcl_resource_texture2d (float,float,float,float) t2
dcl_input_ps linear v1.xy
dcl_output o0.xyzw
dcl_temps 2
sample r0.xyzw, v1.xyxx, t0.xyzw, s0
sample r1.xyzw, v1.xyxx, t1.xyzw, s0
mov r0.y, r1.x
sample r1.xyzw, v1.xyxx, t2.xyzw, s0
mov r0.z, r1.x
add r0.xyz, r0.xyzx, l(-0.062745, -0.501961, -0.501961, 0.000000)
dp2 o0.x, r0.xzxx, l(1.164400, 1.596000, 0.000000, 0.000000)
dp3 o0.y, r0.xyzx, l(1.164400, -0.391800, -0.813000, 0.000000)
dp2 o0.z, r0.xyxx, l(1.164400, 2.017200, 0.000000, 0.000000)
mov o0.w, l(1.000000)
ret 
// Approximately 11 instruction slots used
#endif

const BYTE shader_d3d11_yuv_bt601[] =
{
     68,  88,  66,  67, 142,  85, 
    232,  51, 105, 172, 254, 205, 
     94,  35, 192, 155, 221, 143, 
     52, 127,   1,   0,   0,   0, 
      8,   4,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
     44,   1,   0,   0, 160,   1, 
      0,   0, 212,   1,   0,   0, 
    140,   3,   0,   0,  82,  68, 
     69,  70, 240,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
     28,   0,   0,   0,   0,   4, 
    255, 255,   0,   1,   0,   0, 
    197,   0,   0,   0, 156,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
    170,   0,   0,   0,   2,   0, 
      0,   0,   5,   0,   0,   0, 
      4,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
      1,   0,   0,   0,  13,   0, 
      0,   0, 179,   0,   0,   0, 
      2,   0,   0,   0,   5,   0, 
      0,   0,   4,   0,   0,   0, 
    255, 255, 255, 255,   1,   0, 
      0,   0,   1,   0,   0,   0, 
     13,   0,   0,   0, 188,   0, 
      0,   0,   2,   0,   0,   0, 
      5,   0,   0,   0,   4,   0, 
      0,   0, 255, 255, 255, 255, 
      2,   0,   0,   0,   1,   0, 
      0,   0,  13,   0,   0,   0, 
     76, 105, 110, 101,  97, 114, 
     83,  97, 109, 112, 108, 101, 
    114,   0,  89,  84, 101, 120, 
    116, 117, 114, 101,   0,  85, 
     84, 101, 120, 116, 117, 114, 
    101,   0,  86,  84, 101, 120, 
    116, 117, 114, 101,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  49,  48, 
     46,  49,   0, 171, 171, 171, 
     73,  83,  71,  78, 108,   0, 
      0,   0,   3,   0,   0,   0, 
      8,   0,   0,   0,  80,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  92,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   3,   0,   0, 101,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   2,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  80,  79,  83,  73,  84, 
     73,  79,  78,   0,  84,  69, 
     88,  67,  79,  79,  82,  68, 
      0,  67,  79,  76,  79,  82, 
      0, 171,  79,  83,  71,  78, 
     44,   0,   0,   0,   1,   0, 
      0,   0,   8,   0,   0,   0, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     83,  86,  95,  84,  65,  82, 
     71,  69,  84,   0, 171, 171, 
     83,  72,  68,  82, 176,   1, 
      0,   0,  64,   0,   0,   0, 
    108,   0,   0,   0,  90,   0, 
      0,   3,   0,  96,  16,   0, 
      0,   0,   0,   0,  88,  24, 
      0,   4,   0, 112,  16,   0, 
      0,   0,   0,   0,  85,  85, 
      0,   0,  88,  24,   0,   4, 
      0, 112,  16,   0,   1,   0, 
      0,   0,  85,  85,   0,   0, 
     88,  24,   0,   4,   0, 112, 
     16,   0,   2,   0,   0,   0, 
     85,  85,   0,   0,  98,  16, 
      0,   3,  50,  16,  16,   0, 
      1,   0,   0,   0, 101,   0, 
      0,   3, 242,  32,  16,   0, 
      0,   0,   0,   0, 104,   0, 
      0,   2,   2,   0,   0,   0, 
     69,   0,   0,   9, 242,   0, 
     16,   0,   0,   0,   0,   0, 
     70,  16,  16,   0,   1,   0, 
      0,   0,  70, 126,  16,   0, 
      0,   0,   0,   0,   0,  96, 
     16,   0,   0,   0,   0,   0, 
     69,   0,   0,   9, 242,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  16,  16,   0,   1,   0, 
      0,   0,  70, 126,  16,   0, 
      1,   0,   0,   0,   0,  96, 
     16,   0,   0,   0,   0,   0, 
     54,   0,   0,   5,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   1,   0, 
      0,   0,  69,   0,   0,   9, 
    242,   0,  16,   0,   1,   0, 
      0,   0,  70,  16,  16,   0, 
      1,   0,   0,   0,  70, 126, 
     16,   0,   2,   0,   0,   0, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  54,   0,   0,   5, 
     66,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      1,   0,   0,   0,   0,   0, 
      0,  10, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0, 129, 128, 
    128, 189, 129, 128,   0, 191, 
    129, 128,   0, 191,   0,   0, 
      0,   0,  15,   0,   0,  10, 
     18,  32,  16,   0,   0,   0, 
      0,   0, 134,   0,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,  15,  11, 149,  63, 
    186,  73, 204,  63,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     16,   0,   0,  10,  34,  32, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
     15,  11, 149,  63,   2, 154, 
    200, 190, 197,  32,  80, 191, 
      0,   0,   0,   0,  15,   0, 
      0,  10,  66,  32,  16,   0, 
      0,   0,   0,   0,  70,   0, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,  15,  11, 
    149,  63, 206,  25,   1,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  54,   0,   0,   5, 
    130,  32,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0, 128,  63,  62,   0, 
      0,   1,  83,  84,  65,  84, 
    116,   0,   0,   0,  11,   0, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0
};
