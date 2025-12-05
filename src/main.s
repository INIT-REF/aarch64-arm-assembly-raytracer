.global _start

.section .rodata
    
    .align 3
    hello: .ascii "Hello, World!\n"
    len = . - hello

    ppm_file: .asciz "test.ppm"

.section .text

_start:
    // open file
    mov     x0, #-100 
    ldr     x1, =ppm_file
    mov     x2, #0x41
    mov     x3, #0666
    mov     x8, #56
    svc     #0
    //cmp     x0, #0
    //blt     exit

    // save file handle
    mov     x5, x0

    // write to file
    ldr     x1, =hello
    ldr     x2, =len
    mov     x8, #64
    svc     #0

    // close file
    mov     x0, x5
    mov     x8, #57
    svc     #0

exit:
    mov     x0, #0
    mov     w8, #93
    svc     #0
