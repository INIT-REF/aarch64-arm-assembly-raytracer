.global _start

.section .rodata
    
    .align 3
    hello: .ascii "Hello, World!\n"
    len = . - hello

    ppm_file: .asciz "test.ppm"

.section .data
    .align 3
    
    // for the file descriptor
    fd: .dword 0 

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

    // save file descriptor
    ldr     x1, =fd
    str     x0, [x1]

    // write to file
    ldr     x1, =hello
    ldr     x2, =len
    mov     x8, #64
    svc     #0


// close file and exit
exit:
    ldr     x0, fd
    mov     x8, #57
    svc     #0
    mov     x0, #0
    mov     w8, #93
    svc     #0
