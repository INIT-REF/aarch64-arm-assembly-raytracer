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
// 120 -> defocus_disc_u
// 136 -> defocus_disc_v

vp_init:
    ldr     x0, =viewport

    // cam center
    ldr     q0, look_from
    str     q0, [x0, #8]

    // h = tan(fov / 2)
    ldr     x1, =tan
    ldr     x2, =fov
    ldr     s3, [x1, x2, lsl #2]
    
    // viewport height = 2 * h * focus_dist
    fmov    s1, #2.0
    ldr     s2, focus_dist
    fmul    s1, s1, s2
    fmul    s1, s1, s3
    str     s1, [x0, #4]

    // viewport width
    ldr     x1, =width
    ldr     x2, =height
    ucvtf   s2, w1
    ucvtf   s3, w2
    fmul    s1, s1, s2
    fdiv    s1, s1, s3
    str     s1, [x0]

    // w = unit(look_from - look_at)
    ldr     q1, look_at
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

    // defocus radius = focus_dist * tan (defocus angle / 2)
    // approximation tan(x) = x + x^3 / 3 (x in radians)
    ldr     s3, defocus
    ldr     s4, pi
    fmul    s3, s3, s4
    ldr     s4, _360
    fdiv    s3, s3, s4
    fmul    s5, s3, s3
    fmul    s5, s5, s3
    fmov    s4, #3.0
    fdiv    s4, s5, s4
    fadd    s3, s3, s4
    ldr     s4, focus_dist
    fmul    s3, s3, s4
    dup     v3.4s, v3.s[0]

    // defocus_disc_u = u * defocus radius
    fmul    v4.4s, v1.4s, v3.4s
    str     q4, [x0, #120]

    // defocus_disc_v = v * defocus radius
    fmul    v4.4s, v2.4s, v3.4s
    str     q4, [x0, #136]
     
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
    ucvtf   v5.4s, v5.4s
    fdiv    v5.4s, v3.4s, v5.4s
    str     q5, [x0, #56]

    // pixel delta v = viewport v / image height
    ldr     x1, =height
    dup     v5.4s, w1
    ucvtf   v5.4s, v5.4s
    fdiv    v5.4s, v4.4s, v5.4s
    str     q5, [x0, #72]

    // upper left
    ldr     q1, look_from
    ldr     s2, focus_dist
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
