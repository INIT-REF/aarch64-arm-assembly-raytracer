// ray vs sphere
hit_sphere:
    // get oc in v0
    ldr     x0, =ray
    ldr     x1, =spheres
    ld1     {v0.4s}, [x0]
    ld1     {v1.4s}, [x1]
    fsub    v0.4s, v1.4s, v0.4s     

    // get a in s1
    add     x0, x0, #16     // ray direction
    ld1     {v1.4s}, [x0]
    fmul    v1.4s, v1.4s, v1.4s
    faddp   v1.4s, v1.4s, v1.4s 
    faddp   v1.4s, v1.4s, v1.4s 

    // get h in s2
    ld1     {v2.4s}, [x0]
    fmul    v2.4s, v2.4s, v0.4s
    faddp   v2.4s, v2.4s, v2.4s
    faddp   v2.4s, v2.4s, v2.4s
    
    // get c in s3
    fmul    v0.4s, v0.4s, v0.4s
    faddp   v0.4s, v0.4s, v0.4s
    faddp   v0.4s, v0.4s, v0.4s
    add     x1, x1, #16
    ldr     s3, [x1]
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

    // get t and set x0 to "true"
    fsqrt   s5, s5
    fsub    s2, s2, s5
    fdiv    s2, s2, s1
    mov     x0, #1

hit_sphere_done:
    ret 
