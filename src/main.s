.global _start

.section .rodata
    // output image dimensions
    width  = 1024
    height = 576

    // camera setup
    cam_center:      .float 0.0, 0.0, 0.0, 0.0
    focal_length:    .float 1.0
    viewport_height: .float 2.0

    // some utility vectors
    white:  .float  1.0,  1.0,  1.0, 0.0
    _white: .float -1.0, -1.0, -1.0, 0.0
    black:  .float  0.0,  0.0,  0.0, 0.0
    red:    .float  1.0,  0.0,  0.0, 0.0
    sky:    .float  0.5,  0.7,  1.0, 0.0
    half:   .float  0.5,  0.5,  0.5, 0.0
    double: .float  2.0,  2.0,  2.0, 2.0
    z_1:    .float  0.0,  0.0,  1.0, 0.0

    not_1:  .float 0.999, 0.999, 0.999, 0.0
    _256:   .float 256.0, 256.0, 256.0, 0.0

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


.section .bss
    // buffer for variable ppm header (width, height) 
    hbuff: .fill 12, 1

    // buffer for a row of RGB integers
    ibuff: .fill width, 4

    // line buffer for a row of RGB triples
    lbuff: .fill width * 12, 1

    // memory for the viewport
    viewport: .fill 23, 8

    // viewport indices:
    //   0 -> width
    //   8 -> height
    //  16 -> cam_center
    //  40 -> viewport_u
    //  64 -> viewport_v
    //  88 -> pixel_delta_u
    // 112 -> pixel_delta_v
    // 136 -> upper_left
    // 160 -> pixel00_loc

    // memory for the ray
    ray: .fill 6, 8

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

    eor     x28, x28, x28
    eor     x29, x29, x29
    ldr     x27, =0x808080

// main rendering loop
render:
    ldr     x10, =ibuff
    str     w27, [x10, x28, lsl #2]
    add     x28, x28, #1
    cmp     x28, width
    b.lt    render
    
    // row done, write to file, reset column counter and continue with next row
    bl      write_line
    eor     x28, x28, x28
    add     x29, x29, #1
    cmp     x29, height
    b.lt    render


// close file and exit
exit:
    ldr     x0, fd
    mov     x8, #57
    svc     #0
    mov     x0, #0
    mov     w8, #93
    svc     #0

.include "./src/ppm.inc"
