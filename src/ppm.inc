ppm_header:
    // write "P3"
    ldr     x1, =P3
    mov     x2, #3
    mov     x8, #64
    svc     #0

    // convert width and height to text and write to file
    ldr     x0, =height
    ldr     x1, =hbuff + 11
    mov     x6, #10

height2string:
    udiv    x3, x0, x6
    msub    x4, x3, x6, x0
    mov     x0, x3
    add     x4, x4, #'0'
    strb    w4, [x1, #-1]!
    cbnz    x0, height2string

    ldr     x0, =width
    mov     x2, #32
    strb    w2, [x1, #-1]!
    
width2string:
    udiv    x3, x0, x6
    msub    x4, x3, x6, x0
    mov     x0, x3
    add     x4, x4, #'0'
    strb    w4, [x1, #-1]!
    cbnz    x0, width2string
    
    ldr     x2, =hbuff + 12
    sub     x2, x2, x1
    mov     x8, #64
    ldr     x0, fd
    svc     #0
   
    // write "255"
    ldr     x0, fd
    ldr     x1, =_255
    mov     x2, #4
    mov     x8, #64
    svc     #0
    ret
