// initialize the viewport
//
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

vp_init:
    ldr     x0, =viewport

    // width, height
    ldr     x1, =viewport_height
    ldr     s1, [x1]
    str     s1, [x0, #4]
    ldr     x2, =width
    ldr     x3, =height
    scvtf   s2, w2
    scvtf   s3, w3

    fmul    s1, s1, s2
    fdiv    s1, s1, s3
    str     s1, [x0]

    // cam center
    ldr     x2, =cam_center
    ld1     {v0.4s}, [x2]
    add     x1, x0, #8
    st1     {v0.4s}, [x1]

    // viewport u
    ldr     s1, [x0]
    str     s1, [x0, #24]

    // viewport v
    ldr     s1, [x0, #4]
    fneg    s1, s1
    str     s1, [x0, #44]
    
    // pixel delta u
    ldr     s1, [x0]
    fdiv    s1, s1, s2
    str     s1, [x0, #56]

    // pixel delta v
    ldr     s1, [x0, #44]
    fdiv    s1, s1, s3
    str     s1, [x0, #76]

    // upper left
    ldr     x1, =cam_center
    ld1     {v0.4s}, [x1]
    ldr     x1, =focal_length
    ldr     s2, [x1]
    mov     v1.s[2], v2.s[0]
    ldr     s2, [x0]
    ldr     s3, [x0, #44]
    fmov    s4, #0.5
    fmul    s2, s2, s4
    fmul    s3, s3, s4
    mov     v1.s[0], v2.s[0]
    mov     v1.s[1], v3.s[0]
    fsub    v0.4s, v0.4s, v1.4s
    add     x1, x0, #88
    st1     {v0.4s}, [x1]

    // pixel00_loc
    add     x1, x0, #56
    ld1     {v1.4s}, [x1]
    add     x1, x0, #72
    ld1     {v2.4s}, [x1]
    fmov    v3.4s, #0.5
    fadd    v1.4s, v1.4s, v2.4s
    fmul    v1.4s, v1.4s, v3.4s
    fadd    v0.4s, v0.4s, v1.4s
    add     x1, x0, #104
    st1     {v0.4s}, [x1]
    ret
