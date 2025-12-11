.global _start

.section .rodata
    // output image dimensions
    width  = 1024
    height = 576

    //rendering settings
    samples = 100
    depth = 50

    // camera setup
    cam_center:      .float 0.0, 0.0, 0.0, 0.0
    focal_length:    .float 1.0
    viewport_height: .float 2.0

    // include the scene
    .include "./src/world.inc"

    // some utility vectors
    sky:    .float  0.5,  0.7,  1.0, 0.0
    z_1:    .float  0.0,  0.0,  1.0, 0.0
    
    not_1:  .float 0.999, 0.999, 0.999, 0.0
    _256:   .float 256.0, 256.0, 256.0, 0.0

    // t_min and t_max
    t_min: .float 0.001
    t_max: .dword 0x7f800000

    // ppm-file related
    file: .asciz "image.ppm"
    P3:   .ascii "P3\n"
    _255: .ascii "255\n"

    // LUT for unsigned char to string
    lut: .ascii "000 001 002 003 004 005 006 007 008 009 010 011 012 013 014 015 016 017 018 019 "
         .ascii "020 021 022 023 024 025 026 027 028 029 030 031 032 033 034 035 036 037 038 039 "
         .ascii "040 041 042 043 044 045 046 047 048 049 050 051 052 053 054 055 056 057 058 059 "
         .ascii "060 061 062 063 064 065 066 067 068 069 070 071 072 073 074 075 076 077 078 079 "
         .ascii "080 081 082 083 084 085 086 087 088 089 090 091 092 093 094 095 096 097 098 099 "
         .ascii "100 101 102 103 104 105 106 107 108 109 110 111 112 113 114 115 116 117 118 119 "
         .ascii "120 121 122 123 124 125 126 127 128 129 130 131 132 133 134 135 136 137 138 139 "
         .ascii "140 141 142 143 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 "
         .ascii "160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 "
         .ascii "180 181 182 183 184 185 186 187 188 189 190 191 192 193 194 195 196 197 198 199 "
         .ascii "200 201 202 203 204 205 206 207 208 209 210 211 212 213 214 215 216 217 218 219 "
         .ascii "220 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 238 239 "
         .ascii "240 241 242 243 244 245 246 247 248 249 250 251 252 253 254 255 "


.section .data
    .align 3

    // for the file descriptor
    fd: .dword 0

    // buffer for the variable PPM header data (width, height)
    hbuff: .ascii "           \n"

    // for scaling the multisampled color
    sscale: .float 1.0, 1.0, 1.0, 0.0

    // seed for rand48
    seed: .dword 987654321

.section .bss
    // line buffer for a row of RGB triples
    lbuff: .fill width * 12, 1

    // memory for the viewport
    viewport: .fill 30, 4

    // viewport indices:
    //   0 -> width
    //   4 -> height
    //   8 -> cam_center
    //  24 -> viewport_u
    //  40 -> viewport_v
    //  56 -> pixel_delta_u
    //  72 -> pixel_delta_v
    //  88 -> upper_left
    // 104 -> pixel00_loc

    // memory for the ray
    ray: .fill 8, 4

    // memory for the hit record
    hit: .fill 10, 4

    // hit record indices
    //  0 -> point
    // 16 -> normal
    // 32 -> t
    
    // memory for the ray color
    raycol: .fill 4, 4

.section .text

_start:
    // open file
    mov     x0, #-100 
    ldr     x1, =file
    mov     x2, #0x41
    mov     x3, #0666
    mov     x8, #56
    svc     #0

    // save file descriptor
    ldr     x1, =fd
    str     x0, [x1]
    
    // write ppm_header to file    
    bl      ppm_header
    
    // initialize the viewport
    bl      vp_init

    // set sscale vector
    ldr     x0, =samples
    dup     v0.4s, w0
    scvtf   v0.4s, v0.4s
    ldr     x0, =sscale
    ld1     {v1.4s}, [x0]
    fdiv    v1.4s, v1.4s, v0.4s
    st1     {v1.4s}, [x0]

    // initialize common non-volatile registers
    mov     x19, xzr        // column index
    mov     x20, xzr        // row index
    ldr     x21, =viewport
    ldr     x22, =ray
    ldr     x23, =raycol
    ldr     x24, =lbuff
    ldr     x25, =spheres
    ldr     x26, =hit
    ldr     x27, =lut
    ldr     x28, =seed // initial seed for rand48
    

// main rendering loop
render:
    // preserve x24 and x27, replace with samples and depth
    stp     x24, x27, [sp, #-16]!
    ldr     x24, =samples
    
    // reset raycol to black
    dup     v0.4s, wzr
    st1     {v0.4s}, [x23]

multisample:
    ldr     x27, =depth

    // set ray origin = camera center
    ldr     x0, =cam_center
    ld1     {v0.4s}, [x0]
    st1     {v0.4s}, [x22]
    
    // get random offset vector
    bl      random_offset

    // get ray direction
    dup     v1.4s, w19
    dup     v2.4s, w20
    scvtf   v1.4s, v1.4s
    scvtf   v2.4s, v2.4s
    add     x0, x21, #56
    ld1     {v3.4s}, [x0] 
    add     x0, x21, #72
    ld1     {v4.4s}, [x0]
    fadd    v1.4s, v1.4s, v0.4s
    fadd    v2.4s, v2.4s, v0.4s
    fmul    v1.4s, v1.4s, v3.4s
    fmul    v2.4s, v2.4s, v4.4s
    fadd    v0.4s, v1.4s, v2.4s
    add     x0, x21, #104
    ld1     {v1.4s}, [x0]
    fadd    v0.4s, v0.4s, v1.4s     // pixel center
    add     x0, x21, #8
    ld1     {v1.4s}, [x0]
    fsub    v0.4s, v0.4s, v1.4s     // ray direction (pixel center - camera center)
    add     x0, x22, #16
    st1     {v0.4s}, [x0]

ray_color:
    // check if we have a hit and jump to skycol if not
    bl      hit_anything
    cbz     x0, skycol

    // if we have a hit, set new ray and test again with depth -= 1
    sub     x27, x27, #1
    ld1     {v0.4s}, [x26]
    st1     {v0.4s}, [x22]  // new ray origin = hit.point
    bl      random_unit
    add     x0, x26, #16
    ld1     {v1.4s}, [x0]
    fadd    v0.4s, v0.4s, v1.4s
    add     x0, x22, #16
    st1     {v0.4s}, [x0]  // new ray direction = rec.normal + random unit
    cbnz    x27, ray_color

    movi    v0.4s, #0
    b       add_col 

skycol:
    // set sky color
    add     x0, x22, #16
    ld1     {v0.4s}, [x0]
    fmul    v1.4s, v0.4s, v0.4s
    faddp   v1.4s, v1.4s, v1.4s
    faddp   v1.4s, v1.4s, v1.4s
    fsqrt   s1, s1
    dup     v1.4s, v1.s[0]
    fdiv    v0.4s, v0.4s, v1.4s
    dup     v0.4s, v0.s[1]
    fmov    s1, #0.5
    fmov    s2, #1.0
    fadd    s2, s2, s0
    fmul    s1, s1, s2          // a
    dup     v1.4s, v1.s[0]
    fmov    v0.4s, #1.0
    fsub    v0.4s, v0.4s, v1.4s // 1 - a
    ldr     x0, =sky
    ld1     {v2.4s}, [x0]
    fmul    v1.4s, v1.4s, v2.4s
    fadd    v0.4s, v0.4s, v1.4s

    // scale according to bounces
    ldr     x0, =depth
    sub     x0, x0, x27
    cbz     x0, add_col

    fmov    v1.4s, #0.5

bounce_scale:
    fmul    v0.4s, v0.4s, v1.4s
    sub     x0, x0, #1
    cbnz    x0, bounce_scale

add_col:
    // accumulate color and repeat until samples are done
    // then scale color and restore x24 and x27
    ld1     {v1.4s}, [x23]
    fadd    v1.4s, v1.4s, v0.4s
    st1     {v1.4s}, [x23]
    sub     x24, x24, #1
    cbnz    x24, multisample

    ld1     {v0.4s}, [x23]
    ldr     x0, =sscale
    ld1     {v1.4s}, [x0]
    fmul    v0.4s, v0.4s, v1.4s
    ldp     x24, x27, [sp], #16

clamp:
    // clamp raycol values to interval 0.0 ... 0.999
    // and convert to 0 ... 255 integer
    ldr     x0, =not_1
    ld1     {v1.4s}, [x0]
    movi    v2.4s, #0
    smin    v0.4s, v0.4s, v1.4s
    smax    v0.4s, v0.4s, v2.4s
    ldr     x0, =_256
    ld1     {v1.4s}, [x0]
    fmul    v0.4s, v0.4s, v1.4s
    fcvtzu  v0.4s, v0.4s
    
    // convert raycol vector to string and store in lbuff
    mov     w0, v0.4s[0]
    ldr     w0, [x27, x0, lsl #2]   // get R substring from lut
    str     w0, [x24], #4           // and store in lbuff
    mov     w0, v0.4s[1]
    ldr     w0, [x27, x0, lsl #2]   // same for G and B
    str     w0, [x24], #4
    mov     w0, v0.4s[2]
    ldr     w0, [x27, x0, lsl #2]
    str     w0, [x24], #4

    // continue loop
    add     x19, x19, #1
    cmp     x19, width
    blt     render
    
    // row done, write to file and continue with next row
    mov     x0, #'\n'
    sub     x24, x24, #1
    strb    w0, [x24]
    ldr     x0, fd
    ldr     x1, =lbuff
    ldr     x2, =12 * width
    mov     x8, #64
    svc     #0

    ldr     x24, =lbuff
    mov     x19, xzr
    add     x20, x20, #1
    cmp     x20, height
    blt     render


// close file and exit
exit:
    ldr     x0, fd
    mov     x8, #57
    svc     #0
    mov     x0, #0
    mov     w8, #93
    svc     #0

.include "./src/ppm.inc"
.include "./src/init.inc"
.include "./src/shapes.inc"
.include "./src/util.inc"
