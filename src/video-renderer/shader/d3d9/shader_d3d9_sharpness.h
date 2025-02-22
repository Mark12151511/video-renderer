#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
// Parameters:
//
//   sampler2D ImageSampler;
//   float height;
//   float unsharp;
//   float width;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   width        c0       1
//   height       c1       1
//   unsharp      c2       1
//   ImageSampler s0       1
//

    ps_2_0
    def c3, -1.5, 0, 0.859375, -0.09765625
    def c4, 1.20000005, -1.20000005, 1.20000005, -0.1171875
    def c5, 1.5, 0, 1.5, -0
    dcl t0.xy
    dcl_2d s0
    rcp r0.x, c0.x
    rcp r0.y, c1.x
    mad r1.xy, r0, c5, t0
    mad r2.xy, r0, c5.yzxw, t0
    mad r3.xy, r0, c3, t0
    mad r4.xy, r0, -c5.wzyx, t0
    mad r5.xy, r0, c4.x, t0
    mad r6.xy, r0, c4, t0
    mad r7.xy, r0, c4.yzxw, t0
    mad r0.xy, r0, c4.y, t0
    texld r1, r1, s0
    texld r2, r2, s0
    texld r3, r3, s0
    texld r4, r4, s0
    texld r8, t0, s0
    texld r5, r5, s0
    texld r6, r6, s0
    texld r0, r0, s0
    texld r7, r7, s0
    add r1, r1, r2
    add r1, r3, r1
    add r1, r4, r1
    mul r1, r1, c4.w
    mad r1, r8, c3.z, r1
    add r2, r5, r6
    add r2, r7, r2
    add r0, r0, r2
    mad r0, r0, c3.w, r1
    mad r0, r0, c2.x, r8
    mov oC0, r0

// approximately 30 instruction slots used (9 texture, 21 arithmetic)
#endif

const BYTE shader_d3d9_sharpness[] =
{
      0,   2, 255, 255, 254, 255, 
     58,   0,  67,  84,  65,  66, 
     28,   0,   0,   0, 185,   0, 
      0,   0,   0,   2, 255, 255, 
      4,   0,   0,   0,  28,   0, 
      0,   0,   0,   1,   0,   0, 
    178,   0,   0,   0, 108,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0, 124,   0, 
      0,   0,   0,   0,   0,   0, 
    140,   0,   0,   0,   2,   0, 
      1,   0,   1,   0,   6,   0, 
    148,   0,   0,   0,   0,   0, 
      0,   0, 164,   0,   0,   0, 
      2,   0,   2,   0,   1,   0, 
     10,   0, 148,   0,   0,   0, 
      0,   0,   0,   0, 172,   0, 
      0,   0,   2,   0,   0,   0, 
      1,   0,   2,   0, 148,   0, 
      0,   0,   0,   0,   0,   0, 
     73, 109,  97, 103, 101,  83, 
     97, 109, 112, 108, 101, 114, 
      0, 171, 171, 171,   4,   0, 
     12,   0,   1,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 104, 101, 105, 103, 
    104, 116,   0, 171,   0,   0, 
      3,   0,   1,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 117, 110, 115, 104, 
     97, 114, 112,   0, 119, 105, 
    100, 116, 104,   0, 112, 115, 
     95,  50,  95,  48,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  49,  48, 
     46,  49,   0, 171, 171, 171, 
     81,   0,   0,   5,   3,   0, 
     15, 160,   0,   0, 192, 191, 
      0,   0,   0,   0,   0,   0, 
     92,  63,   0,   0, 200, 189, 
     81,   0,   0,   5,   4,   0, 
     15, 160, 154, 153, 153,  63, 
    154, 153, 153, 191, 154, 153, 
    153,  63,   0,   0, 240, 189, 
     81,   0,   0,   5,   5,   0, 
     15, 160,   0,   0, 192,  63, 
      0,   0,   0,   0,   0,   0, 
    192,  63,   0,   0,   0, 128, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   0,   0,   3, 176, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   0,   8,  15, 160, 
      6,   0,   0,   2,   0,   0, 
      1, 128,   0,   0,   0, 160, 
      6,   0,   0,   2,   0,   0, 
      2, 128,   1,   0,   0, 160, 
      4,   0,   0,   4,   1,   0, 
      3, 128,   0,   0, 228, 128, 
      5,   0, 228, 160,   0,   0, 
    228, 176,   4,   0,   0,   4, 
      2,   0,   3, 128,   0,   0, 
    228, 128,   5,   0, 201, 160, 
      0,   0, 228, 176,   4,   0, 
      0,   4,   3,   0,   3, 128, 
      0,   0, 228, 128,   3,   0, 
    228, 160,   0,   0, 228, 176, 
      4,   0,   0,   4,   4,   0, 
      3, 128,   0,   0, 228, 128, 
      5,   0,  27, 161,   0,   0, 
    228, 176,   4,   0,   0,   4, 
      5,   0,   3, 128,   0,   0, 
    228, 128,   4,   0,   0, 160, 
      0,   0, 228, 176,   4,   0, 
      0,   4,   6,   0,   3, 128, 
      0,   0, 228, 128,   4,   0, 
    228, 160,   0,   0, 228, 176, 
      4,   0,   0,   4,   7,   0, 
      3, 128,   0,   0, 228, 128, 
      4,   0, 201, 160,   0,   0, 
    228, 176,   4,   0,   0,   4, 
      0,   0,   3, 128,   0,   0, 
    228, 128,   4,   0,  85, 160, 
      0,   0, 228, 176,  66,   0, 
      0,   3,   1,   0,  15, 128, 
      1,   0, 228, 128,   0,   8, 
    228, 160,  66,   0,   0,   3, 
      2,   0,  15, 128,   2,   0, 
    228, 128,   0,   8, 228, 160, 
     66,   0,   0,   3,   3,   0, 
     15, 128,   3,   0, 228, 128, 
      0,   8, 228, 160,  66,   0, 
      0,   3,   4,   0,  15, 128, 
      4,   0, 228, 128,   0,   8, 
    228, 160,  66,   0,   0,   3, 
      8,   0,  15, 128,   0,   0, 
    228, 176,   0,   8, 228, 160, 
     66,   0,   0,   3,   5,   0, 
     15, 128,   5,   0, 228, 128, 
      0,   8, 228, 160,  66,   0, 
      0,   3,   6,   0,  15, 128, 
      6,   0, 228, 128,   0,   8, 
    228, 160,  66,   0,   0,   3, 
      0,   0,  15, 128,   0,   0, 
    228, 128,   0,   8, 228, 160, 
     66,   0,   0,   3,   7,   0, 
     15, 128,   7,   0, 228, 128, 
      0,   8, 228, 160,   2,   0, 
      0,   3,   1,   0,  15, 128, 
      1,   0, 228, 128,   2,   0, 
    228, 128,   2,   0,   0,   3, 
      1,   0,  15, 128,   3,   0, 
    228, 128,   1,   0, 228, 128, 
      2,   0,   0,   3,   1,   0, 
     15, 128,   4,   0, 228, 128, 
      1,   0, 228, 128,   5,   0, 
      0,   3,   1,   0,  15, 128, 
      1,   0, 228, 128,   4,   0, 
    255, 160,   4,   0,   0,   4, 
      1,   0,  15, 128,   8,   0, 
    228, 128,   3,   0, 170, 160, 
      1,   0, 228, 128,   2,   0, 
      0,   3,   2,   0,  15, 128, 
      5,   0, 228, 128,   6,   0, 
    228, 128,   2,   0,   0,   3, 
      2,   0,  15, 128,   7,   0, 
    228, 128,   2,   0, 228, 128, 
      2,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 128, 
      2,   0, 228, 128,   4,   0, 
      0,   4,   0,   0,  15, 128, 
      0,   0, 228, 128,   3,   0, 
    255, 160,   1,   0, 228, 128, 
      4,   0,   0,   4,   0,   0, 
     15, 128,   0,   0, 228, 128, 
      2,   0,   0, 160,   8,   0, 
    228, 128,   1,   0,   0,   2, 
      0,   8,  15, 128,   0,   0, 
    228, 128, 255, 255,   0,   0
};
