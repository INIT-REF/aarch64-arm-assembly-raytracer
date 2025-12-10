// ray vs world
hit_anything:
    // get t_min and t_max, init spheres index
    ldr     s30, t_min
    ldr     s31, t_max
    mov     x10, xzr    // object index
    mov     x11, xzr    // hit flag


// ray vs sphere
hit_sphere:
    // get oc in v0
    ld1     {v0.4s}, [x22]
    add     x0, x25, x10
    ld1     {v1.4s}, [x0]
    fsub    v0.4s, v1.4s, v0.4s     

    // get a in s1
    add     x1, x22, #16
    ld1     {v1.4s}, [x1]
    mov     v2.16B, v1.16B
    fmul    v1.4s, v1.4s, v1.4s
    faddp   v1.4s, v1.4s, v1.4s 
    faddp   v1.4s, v1.4s, v1.4s 

    // get h in s2
    fmul    v2.4s, v2.4s, v0.4s
    faddp   v2.4s, v2.4s, v2.4s
    faddp   v2.4s, v2.4s, v2.4s
    
    // get c in s3
    fmul    v0.4s, v0.4s, v0.4s
    faddp   v0.4s, v0.4s, v0.4s
    faddp   v0.4s, v0.4s, v0.4s
    add     x0, x0, #16
    ldr     s3, [x0]
    fmul    s3, s3, s3
    fsub    s3, s0, s3

    //get discriminant in s4
    fmul    s4, s2, s2
    fmul    s5, s1, s3
    fsub    s4, s4, s5
    
    // check if discriminant >= 0 and break if not
    fcmge   s5, s4, #0.0
    fmov    w0, s5
    cbz     w0, hit_sphere_done

    // get t, try first root (h - sqrt(d))
    fsqrt   s4, s4
    fsub    s3, s2, s4
    fdiv    s0, s3, s1
    fcmge   s5, s0, s30
    fcmge   s6, s31, s0
    fmov    w0, s5
    fmov    w1, s6
    and     x0, x0, x1
    cbnz    x0, set_hit

    // try (h + sqrt(d))
    fadd    s3, s2, s4
    fdiv    s0, s3, s1
    fcmge   s5, s0, s30
    fcmge   s6, s31, s0
    fmov    w0, s5
    fmov    w1, s6
    and     x0, x0, x1
    cbz     x0, hit_sphere_done

set_hit:
    str     s0, [x26, #32]      // hit.t
    fmov    s31, s0             // = new t_max
    ld1     {v1.4s}, [x22]
    add     x0, x22, #16
    ld1     {v2.4s}, [x0]
    dup     v0.4s, v0.s[0]
    fmul    v0.4s, v0.4s, v2.4s
    fadd    v0.4s, v0.4s, v1.4s // ray at t
    st1     {v0.4s}, [x26]      // = hit.point
    add     x0, x25, x10
    ld1     {v1.4s}, [x0]
    fsub    v0.4s, v0.4s, v1.4s
    add     x0, x0, #16
    ldr     s1, [x0]
    dup     v1.4s, v1.s[0]
    fdiv    v0.4s, v0.4s, v1.4s // normal = (hit.point - center) / radius

    // set normal direction
    fmul    v1.4s, v0.4s, v2.4s
    faddp   v1.4s, v1.4s, v1.4s
    faddp   v1.4s, v1.4s, v1.4s
    fcmge   s1, s1, #0.0
    fmov    w0, s1
    cbz     x0, hit_done
    fneg    v0.4s, v0.4s

hit_done:
    // store normal
    add     x0, x26, #16
    st1     {v0.4s}, [x0]

    // hit_sphere = true
    mov     x11, #1    

hit_sphere_done:
    //  try next sphere
    add     x10, x10, #20
    cmp     x10, 20
    ble     hit_sphere
    mov     x0, x11
    ret 
