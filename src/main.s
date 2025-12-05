.global _start

.section .rodata
    // output image dimensions
    width  = 1024
    height = 576    

    // ppm-file related
    file: .asciz "test.ppm"
    P3:   .ascii "P3\n"
    _255: .ascii "255\n"

.section .data
    .align 3
    
    // for the file descriptor
    fd: .dword 0

.section .bss
    // buffer for variable ppm header (width, height) 
    hbuff: .fill 12, 1

.section .text

_start:
    // open file
    mov     x0, #-100 
    ldr     x1, =file
    mov     x2, #0x41
    mov     x3, #0666
    mov     x8, #56
    svc     #0

    // save file descriptor
    ldr     x1, =fd
    str     x0, [x1]
    
    // write ppm_header to file    
    bl      ppm_header



// close file and exit
exit:
    ldr     x0, fd
    mov     x8, #57
    svc     #0
    mov     x0, #0
    mov     w8, #93
    svc     #0

.include "./src/ppm.inc"
