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
    ldr     s1, viewport_height
    str     s1, [x0, #4]
    ldr     x2, =width
    ldr     x3, =height
    scvtf   s2, w2
    scvtf   s3, w3

    fmul    s1, s1, s2
    fdiv    s1, s1, s3
    str     s1, [x0]

    // cam center
    ldr     x1, =cam_center
    ldr     q0, [x1]
    str     q0, [x0, #8]

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
    ldr     s2, focal_length
    mov     v1.s[2], v2.s[0]
    ldr     s2, [x0]
    ldr     s3, [x0, #44]
    fmov    s4, #0.5
    fmul    s2, s2, s4
    fmul    s3, s3, s4
    mov     v1.s[0], v2.s[0]
    mov     v1.s[1], v3.s[0]
    ldr     x1, =cam_center
    ldr     q0, [x1]
    fsub    v0.4s, v0.4s, v1.4s
    str     q0, [x0, #88]

    // pixel00_loc
    ldr     q1, [x0, #56]
    ldr     q2, [x0, #72]
    fmov    v3.4s, #0.5
    fadd    v1.4s, v1.4s, v2.4s
    fmul    v1.4s, v1.4s, v3.4s
    fadd    v0.4s, v0.4s, v1.4s
    str     q0, [x0, #104]
    ret
