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

    // cam center
    ldr     q0, look_from
    str     q0, [x0, #8]

    // focal length
    ldr     q1, look_at
    fsub    v2.4s, v0.4s, v1.4s
    fmul    v2.4s, v2.4s, v2.4s
    faddp   v2.4s, v2.4s, v2.4s
    faddp   v2.4s, v2.4s, v2.4s
    fsqrt   s2, s2
    str     s2, [sp, #-16]!  // save for later
    
    // h = tan(fov / 2)
    ldr     x1, =tan
    ldr     x2, =fov
    ldr     s3, [x1, x2, lsl #2]
    
    // viewport height = 2 * h * focal length
    fmov    s4, #2.0
    fmul    s3, s3, s2
    fmul    s3, s3, s4
    str     s3, [x0, #4]

    // viewport width
    ldr     x1, =width
    ldr     x2, =height
    scvtf   s4, w1
    scvtf   s5, w2
    fmul    s3, s3, s4
    fdiv    s3, s3, s5
    str     s3, [x0]

    // w = unit(look_from - look_at)
    fsub    v0.4s, v0.4s, v1.4s
    fmul    v1.4s, v0.4s, v0.4s
    faddp   v1.4s, v1.4s, v1.4s
    faddp   v1.4s, v1.4s, v1.4s
    fsqrt   s1, s1
    dup     v1.4s, v1.s[0]
    fdiv    v0.4s, v0.4s, v1.4s

    // u = unit(cross(v_up, w))
    ldr     q1, v_up
    mov     v2.s[0], v1.s[1]
    mov     v2.s[1], v1.s[2]
    mov     v2.s[2], v1.s[0]
    mov     v3.s[0], v0.s[2]
    mov     v3.s[1], v0.s[0]
    mov     v3.s[2], v0.s[1]
    mov     v4.s[0], v1.s[2]
    mov     v4.s[1], v1.s[0]
    mov     v4.s[2], v1.s[1]
    mov     v5.s[0], v0.s[1]
    mov     v5.s[1], v0.s[2]
    mov     v5.s[2], v0.s[0]
    fmul    v1.4s, v2.4s, v3.4s
    fmul    v4.4s, v4.4s, v5.4s
    fsub    v1.4s, v1.4s, v4.4s
    fmul    v2.4s, v1.4s, v1.4s
    faddp   v2.4s, v2.4s, v2.4s
    faddp   v2.4s, v2.4s, v2.4s
    fsqrt   s2, s2
    dup     v2.4s, v2.s[0]
    fdiv    v1.4s, v1.4s, v2.4s

    // v = cross(w, u)
    mov     v2.s[0], v0.s[1]
    mov     v2.s[1], v0.s[2]
    mov     v2.s[2], v0.s[0]
    mov     v3.s[0], v1.s[2]
    mov     v3.s[1], v1.s[0]
    mov     v3.s[2], v1.s[1]
    mov     v4.s[0], v0.s[2]
    mov     v4.s[1], v0.s[0]
    mov     v4.s[2], v0.s[1]
    mov     v5.s[0], v1.s[1]
    mov     v5.s[1], v1.s[2]
    mov     v5.s[2], v1.s[0]
    fmul    v2.4s, v2.4s, v3.4s
    fmul    v4.4s, v4.4s, v5.4s
    fsub    v2.4s, v2.4s, v4.4s
     
    // viewport u = width * u
    ldr     s3, [x0]
    dup     v3.4s, v3.s[0]
    fmul    v3.4s, v3.4s, v1.4s
    str     q3, [x0, #24]

    // viewport v = height * -v
    ldr     s4, [x0, #4]
    dup     v4.4s, v4.s[0]
    fneg    v2.4s, v2.4s
    fmul    v4.4s, v4.4s, v2.4s
    str     q4, [x0, #40]

    // pixel delta u = viewport u / image width
    ldr     x1, =width
    dup     v5.4s, w1
    scvtf   v5.4s, v5.4s
    fdiv    v5.4s, v3.4s, v5.4s
    str     q5, [x0, #56]

    // pixel delta v = viewport v / image height
    ldr     x1, =height
    dup     v5.4s, w1
    scvtf   v5.4s, v5.4s
    fdiv    v5.4s, v4.4s, v5.4s
    str     q5, [x0, #72]

    // upper left
    ldr     q1, look_from
    ldr     s2, [sp], #16   // get focal length back
    dup     v2.4s, v2.s[0]
    fmul    v2.4s, v2.4s, v0.4s
    fmov    v0.4s, #0.5
    fmul    v3.4s, v3.4s, v0.4s
    fmul    v4.4s, v4.4s, v0.4s
    fsub    v1.4s, v1.4s, v2.4s
    fsub    v1.4s, v1.4s, v3.4s
    fsub    v1.4s, v1.4s, v4.4s
    str     q1, [x0, #88]

    // pixel00_loc
    ldr     q2, [x0, #56]
    ldr     q3, [x0, #72]
    fadd    v2.4s, v2.4s, v3.4s
    fmul    v2.4s, v2.4s, v0.4s
    fadd    v0.4s, v1.4s, v2.4s
    str     q0, [x0, #104]
    ret
