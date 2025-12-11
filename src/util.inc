// various helper functions

// generate a random vector for the ray XY offset, result in v0
random_offset:
    ldr     w3, [x28]
    scvtf   s1, w3
    ldr     x0, =0xffffffff
    scvtf   s2, x0
    fdiv    s1, s1, s2
    ldr     x1, =25214903917
    mul     x0, x3, x1
    add     x0, x0, #11
    mov     x2, #1
    lsl     x2, x2, #48
    udiv    x3, x0, x2
    msub    x3, x3, x2, x0
    str     w3, [x28]
    scvtf   s3, w3
    fdiv    s3, s3, s2
    movi    v0.4s, #0   // reset v0 to all 0s
    mov     v0.s[0], v1.s[0]
    mov     v0.s[1], v3.s[0]
    fmov    v1.4s, #0.5
    fsub    v0.4s, v0.4s, v1.4s
    ret


// generate a random unit vector, result in v0
random_unit:
    ldr     w3, [x28]
    scvtf   s1, w3
    ldr     x0, =0xffffffff
    scvtf   s2, x0
    fdiv    s1, s1, s2
    ldr     x1, =25214903917
    mul     x0, x3, x1
    add     x0, x0, #11
    mov     x2, #1
    lsl     x2, x2, #48
    udiv    x3, x0, x2
    msub    x3, x3, x2, x0
    scvtf   s3, w3
    fdiv    s3, s3, s2
    mul     x0, x3, x1
    add     x0, x0, #11
    udiv    x3, x0, x2
    msub    x3, x3, x2, x0
    str     w3, [x28]
    scvtf   s4, w3
    fdiv    s4, s4, s2
    movi    v0.4s, #0   // reset v0 to all 0s
    mov     v0.s[0], v1.s[0]
    mov     v0.s[1], v3.s[0]
    mov     v0.s[2], v4.s[0]
    
    // get lenght and repeat if length = 0
    mov     v1.16B, v0.16B
    fmul    v1.4s, v1.4s, v1.4s
    faddp   v1.4s, v1.4s, v1.4s
    faddp   v1.4s, v1.4s, v1.4s
    fsqrt   s1, s1
    fmov    w0, s1
    cbz     x0, random_unit
    
    dup     v1.4s, w0
    fdiv    v0.4s, v0.4s, v1.4s

roh_done:
    ret
