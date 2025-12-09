ppm_header:
    // preserve x19-x29
    stp     x19, x20, [sp,#-0x20]!
    str     x21, [sp,#0x10]
    stp     fp, lr, [sp,#-0x10]!

    // just write "P3"
    ldr     x1, =P3
    mov     x2, #3
    mov     x8, #64
    svc     #0

    // convert width and height to text and write to file
    ldr     x0, =height
    ldr     x1, =hbuff
    mov     x2, #10
    mov     x28, #11
    strb    w2, [x1, x28]
    mov     x28, #10
    bl      convert
    ldr     x0, =width
    mov     x2, #32
    strb    w2, [x1, x28]
    mov     x2, #10
    sub     x28, x28, #1
    bl      convert
    ldr     x0, fd
    add     x28, x28, #1
    add     x1, x1, x28
    mov     x2, #12
    sub     x2, x2, x28
    mov     x8, #64
    svc     #0
   
    // write "255" to file
    ldr     x0, fd
    ldr     x1, =_255
    mov     x2, #4
    mov     x8, #64
    svc     #0

     
    // cleanup
    ldp     fp, lr, [sp], #0x10
    ldr     x21, [sp, #0x10]
    ldp     x19, x20, [sp], #0x20
    ret


// continously divide the number by 10 to extract the digits
// convert each digit to a char and put it in hbuff
convert:
    udiv    x3, x0, x2
    msub    x4, x3, x2, x0
    mov     x0, x3
    add     x4, x4, #'0'
    strb    w4, [x1, x28]
    sub     x28, x28, #1
    cbnz    x0, convert
    ret

// convert contents of ibuff to RGB triples and write to file
write_line:
    ldr     x0, =ibuff
    ldr     x1, =lbuff
    ldr     x2, =lut
    mov     x3, xzr
    mov     x4, xzr
    
int2col:
    ldr     w5, [x0, x3, lsl #2]
    mov     x6, x5
    lsr     x6, x6, #16
    ldr     w7, [x2, x6, lsl #2]
    str     w7, [x1, x4]
    add     x4, x4, #4
    mov     x6, x5
    lsr     x6, x6, #8
    and     x6, x6, #255
    ldr     w7, [x2, x6, lsl #2]
    str     w7, [x1, x4]
    add     x4, x4, #4
    and     x5, x5, #255
    ldr     w7, [x2, x5, lsl #2]
    str     w7, [x1, x4]
    add     x4, x4, #4
    add     x3, x3, #1
    cmp     x3, width
    b.lt    int2col
    sub     x4, x4, #1
    mov     x7, #'\n'
    strb    w7, [x1, x4]

    ldr     x0, fd
    ldr     x1, =lbuff
    ldr     x2, =12 * width
    mov     x8, #64
    svc     #0
    ret
