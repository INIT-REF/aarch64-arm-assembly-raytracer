.global _start

.section .rodata
    // output image dimensions
    width  = 400
    height = 225

    //rendering settings
    samples = 200
    depth = 50

    // camera setup
    fov = 20
    defocus:    .float 20.0
    focus_dist: .float 3.4
    look_from:  .float -2.0, 2.0, 1.0, 0.0
    look_at:    .float 0.0, 0.0, -1.0, 0.0
    v_up:       .float 0.0, 1.0, 0.0, 0.0
    
    // include the scene
    .include "./src/world.inc"

    // some utility vectors
    sky:    .float 0.5, 0.7, 1.0, 0.0
    not_1:  .float 0.999, 0.999, 0.999, 0.0
    _256:   .float 256.0, 256.0, 256.0, 0.0

    // t_min and t_max
    t_min: .float 0.001
    t_max: .word 0x7f800000

    // for near zero
    tiny: .float 0.0000003

    // for degrees to radians
    pi:   .float 3.141592654
    _360: .float 360.0

    // ppm-file related
    file: .asciz "image.ppm"
    P3:   .ascii "P3\n"
    _255: .ascii "255\n"

    // look up tables
    .include "./src/luts.inc"

    // rendering done message
    done: .ascii "Rendering done, result in image.ppm\n"


.section .data
    .align 3

    // for the file descriptor
    fd: .dword 0

    // buffer for the variable PPM header data (width, height)
    hbuff: .ascii "           \n"

    // buffer for the progress text
    pbuff: .ascii "Rendering progress:     %\r"
    
    // for scaling the multisampled color
    sscale: .float 1.0, 1.0, 1.0, 0.0

    // seed for rand48
    seed: .dword 987654321

.section .bss
    // line buffer for a row of RGB triples
    lbuff: .fill width * 12, 1

    // memory for the viewport
    viewport: .fill 38, 4

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

    // memory for the ray
    ray: .fill 8, 4

    // memory for the hit record
    hit: .fill 16, 4

    // hit record indices
    //  0 -> point
    // 16 -> normal
    // 32 -> t
    // 36 -> material type
    // 40 -> material color
    // 56 -> material fuzz
    // 60 -> front face
    
    // memory for the ray color and attenuation
    raycol: .fill 8, 4

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
    
    // initialize the viewport
    bl      vp_init

    // set sscale vector
    ldr     x0, =samples
    dup     v0.4s, w0
    scvtf   v0.4s, v0.4s
    ldr     x0, =sscale
    ldr     q1, [x0]
    fdiv    v1.4s, v1.4s, v0.4s
    str     q1, [x0]

    // initialize common non-volatile registers
    mov     x19, xzr        // column index
    mov     x20, xzr        // row index
    ldr     x21, =viewport
    ldr     x22, =ray
    ldr     x23, =raycol
    ldr     x24, =lbuff
    ldr     x25, =spheres
    ldr     x26, =hit
    ldr     x27, =lut
    ldr     x28, =seed      // initial seed for rand48
    

// main rendering loop
render:
    // print rendering progress on stdout
    mov     x1, #100
    mul     x0, x20, x1
    ldr     x1, =height
    udiv    x0, x0, x1
    ldr     w0, [x27, x0, lsl #2]
    ldr     x1, =pbuff
    add     x2, x1, #20
    str     w0, [x2]
    mov     x0, #1
    mov     x2, #26
    mov     x8, #64
    svc     #0

    // reset raycol to black
    dup     v0.4s, wzr
    str     q0, [x23]
    
    // preserve x24 and x27, replace with samples and depth
    stp     x24, x27, [sp, #-16]!
    ldr     x24, =samples
    
multisample:
    ldr     x27, =depth

    // get ray.origin
    // if defocus > 0 goto blur
    ldr     x0, =defocus
    cbnz    x0, blur

    // else just set it to the cam center
    ldr     q0, [x21, #8]
    str     q0, [x22]
    b       direction

blur:
    // get random origin depending on defocus value
    bl      random_offset
    dup     v1.4s, v0.s[0]
    dup     v2.4s, v0.s[1]
    ldr     q0, [x21, #120]
    fmul    v0.4s, v0.4s, v1.4s
    ldr     q1, [x21, #136]
    fmul    v1.4s, v1.4s, v2.4s
    ldr     q2, [x21, #8]
    fadd    v0.4s, v0.4s, v1.4s
    fadd    v0.4s, v0.4s, v2.4s
    str     q0, [x22]

direction:
    // get random offset vectors
    bl      random_offset
    dup     v3.4s, v0.s[0]
    dup     v4.4s, v0.s[1]

    // get ray.direction
    dup     v1.4s, w19
    dup     v2.4s, w20
    scvtf   v1.4s, v1.4s
    scvtf   v2.4s, v2.4s
    fadd    v1.4s, v1.4s, v3.4s
    fadd    v2.4s, v2.4s, v4.4s
    ldr     q3, [x21, #56]
    ldr     q4, [x21, #72]
    fmul    v1.4s, v1.4s, v3.4s
    fmul    v2.4s, v2.4s, v4.4s
    fadd    v0.4s, v1.4s, v2.4s
    ldr     q1, [x21, #104]
    fadd    v0.4s, v0.4s, v1.4s     // pixel center
    ldr     q1, [x22]
    fsub    v0.4s, v0.4s, v1.4s
    str     q0, [x22, #16]          // ray.direction = pixel_sample - ray.origin

    // init attenuation
    fmov    v0.4s, #1.0
    str     q0, [x23, #16]
    
    // check if we have a hit and jump to skycolor if not
    bl      hit_anything
    cbz     x0, skycolor

scatter: 
    // if we have a hit, set depth -= 1
    sub     x27, x27, #1
    cbz     x27, black
    ldr     q1, [x26]
    str     q1, [x22]       // new ray.origin = hit.point

    // get the material type
    ldr     w0, [x26, 36]
    cbz     x0, diffuse     // if type = 0 continue at diffuse
    sub     x0, x0, #1
    cbz     x0, metal       // if type = 1 continue at metal

glass:
    fmov    s0, #1.5
    fmov    s1, #1.0
    ldr     w0, [x26, #60]  // get front face flag
    cbnz    x0, front_face  // and use 1.5 as the refraction index
    fdiv    s10, s1, s0      // else use 1 / 1.5

front_face:
    // get unit(ray.direction)
    ldr     q0, [x22, #16]
    fmul    v1.4s, v0.4s, v0.4s
    faddp   v1.4s, v1.4s, v1.4s
    faddp   v1.4s, v1.4s, v1.4s
    fsqrt   s1, s1
    dup     v1.4s, v1.s[0]
    fdiv    v0.4s, v0.4s, v1.4s

    // get cos(theta)
    fneg    v1.4s, v0.4s
    ldr     q2, [x26, #16]
    fmul    v1.4s, v1.4s, v2.4s
    faddp   v1.4s, v1.4s, v1.4s
    faddp   v1.4s, v1.4s, v1.4s
    fmov    s2, #1.0
    fmin    s1, s1, s2
    
    // get sin(theta)
    fmul    s3, s1, s1
    fsub    s1, s2, s3

    // check if refraction index * sin(theta) > 1
    fmul    s3, s10, s3
    fcmgt   s3, s3, s2
    fmov    w0, s3
    cbnz    x0, metal   // if > 1 the ray is reflected

    // else we calculate the refraction
    // get r_out_perp
    ldr     q2, [x26, #16]
    dup     v1.4s, v1.s[0]
    fmul    v3.4s, v2.4s, v1.4s // hit.normal * cos(theta)
    fadd    v0.4s, v0.4s, v3.4s // + unit(ray_direction)
    dup     v3.4s, v10.s[0]
    fmul    v0.4s, v0.4s, v3.4s // * refraction index

    // get r_out_parallel
    fmul    v3.4s, v0.4s, v0.4s
    faddp   v3.4s, v3.4s, v3.4s
    faddp   v3.4s, v3.4s, v3.4s
    dup     v3.4s, v3.s[0]
    fmov    v1.4s, #1.0
    fsub    v1.4s, v1.4s, v3.4s
    fabs    v1.4s, v1.4s
    fsqrt   v1.4s, v1.4s
    fneg    v1.4s, v1.4s
    fmul    v1.4s, v1.4s, v2.4s
    fadd    v0.4s, v1.4s, v0.4s  
    b       scatter_done 

metal:
    // get reflected vector
    ldr     q0, [x22, #16]  // ray.direction
    ldr     q1, [x26, #16]  // hit.normal
    fmul    v2.4s, v0.4s, v1.4s
    faddp   v2.4s, v2.4s, v2.4s
    faddp   v2.4s, v2.4s, v2.4s
    dup     v2.4s, v2.s[0]
    fmov    v3.4s, #2.0
    fmul    v2.4s, v2.4s, v3.4s
    fmul    v1.4s, v1.4s, v2.4s
    fsub    v0.4s, v0.4s, v1.4s

    // if fuzz > 0 randomize reflection depending on fuzz
    ldr     w0, [x26, #56]
    cbz     x0, scatter_done    // no fuzz, no todo
    mov     v1.16b, v0.16b
    fmul    v1.4s, v1.4s, v1.4s
    faddp   v1.4s, v1.4s, v1.4s
    faddp   v1.4s, v1.4s, v1.4s
    fsqrt   s1, s1
    dup     v1.4s, v1.s[0]
    fdiv    v1.4s, v0.4s, v1.4s // unit(reflected)
    str     q1, [sp, #-16]!     // preserve on the stack
    bl      random_unit
    ldr     q1, [sp], #16       // and get it back in q1
    ldr     w0, [x26, #56]
    dup     v2.4s, w0
    fmul    v0.4s, v0.4s, v2.4s // fuzz * random_unit
    fadd    v0.4s, v0.4s, v1.4s // + unit(reflected) = final result
    b       scatter_done

diffuse:
    // get random reflected vector
    bl      random_unit
    ldr     q1, [x26, #16]
    fadd    v0.4s, v0.4s, v1.4s

    // catch near zero condition
    fabs    v1.4s, v0.4s
    faddp   v1.4s, v1.4s, v1.4s
    faddp   v1.4s, v1.4s, v1.4s
    ldr     s2, =tiny
    fcmge   s1, s1, s2
    fmov    w1, s1
    cbnz    x1, scatter_done

    // set scatter direction to hit.normal if near zero
    ldr     q0, [x26, #16]

scatter_done:
    str     q0, [x22, #16]  // new ray.direction
    ldr     q0, [x26, #40]
    ldr     q1, [x23, #16]
    fmul    v0.4s, v0.4s, v1.4s
    str     q0, [x23, #16]  // attenuation *= hit.color
    bl      hit_anything
    cbnz    x0, scatter
    
    // no hit anymore -> store final color in attenuation
    ldr     q0, [x23, #16]
    b       skycolor

black:
    movi    v0.4s, #0
    str     q0, [x23, #16]

skycolor:
    // set sky color
    ldr     q0, [x22, #16]
    fmul    v1.4s, v0.4s, v0.4s
    faddp   v1.4s, v1.4s, v1.4s
    faddp   v1.4s, v1.4s, v1.4s
    fsqrt   s1, s1
    dup     v1.4s, v1.s[0]
    fdiv    v0.4s, v0.4s, v1.4s
    dup     v0.4s, v0.s[1]
    fmov    s1, #0.5
    fmov    s2, #1.0
    fadd    s2, s2, s0
    fmul    s1, s1, s2          // a
    dup     v1.4s, v1.s[0]
    fmov    v0.4s, #1.0
    fsub    v0.4s, v0.4s, v1.4s // 1 - a
    ldr     x0, =sky
    ldr     q2, [x0]
    fmul    v1.4s, v1.4s, v2.4s
    fadd    v0.4s, v0.4s, v1.4s
    ldr     q1, [x23, #16]
    fmul    v0.4s, v0.4s, v1.4s // skycolor *= attenuation

add_color:
    // accumulate color and repeat until samples are done
    // then scale color and restore x24 and x27
    ldr     q1, [x23]
    fadd    v1.4s, v1.4s, v0.4s
    str     q1, [x23]
    sub     x24, x24, #1
    cbnz    x24, multisample

    ldr     q0, [x23]
    ldr     x0, =sscale
    ldr     q1, [x0]
    fmul    v0.4s, v0.4s, v1.4s
    ldp     x24, x27, [sp], #16

clamp:
    // clamp raycol values to interval 0.0 ... 0.999
    // and convert to 0 ... 255 integer
    fsqrt   v0.4s, v0.4s        // gamma correction
    ldr     x0, =not_1
    ldr     q1, [x0]
    movi    v2.4s, #0
    smin    v0.4s, v0.4s, v1.4s
    smax    v0.4s, v0.4s, v2.4s
    ldr     x0, =_256
    ldr     q1, [x0]
    fmul    v0.4s, v0.4s, v1.4s
    fcvtzu  v0.4s, v0.4s
    
    // convert raycol vector to string and store in lbuff
    mov     w0, v0.4s[0]
    ldr     w0, [x27, x0, lsl #2]   // get R substring from lut
    str     w0, [x24], #4           // and store in lbuff
    mov     w0, v0.4s[1]
    ldr     w0, [x27, x0, lsl #2]   // same for G and B
    str     w0, [x24], #4
    mov     w0, v0.4s[2]
    ldr     w0, [x27, x0, lsl #2]
    str     w0, [x24], #4

    // continue loop
    add     x19, x19, #1
    cmp     x19, width
    blt     render
    
    // row done, write to file and continue with next row
    mov     x0, #'\n'
    sub     x24, x24, #1
    strb    w0, [x24]
    ldr     x0, fd
    ldr     x1, =lbuff
    ldr     x2, =12 * width
    mov     x8, #64
    svc     #0

    ldr     x24, =lbuff
    mov     x19, xzr
    add     x20, x20, #1
    cmp     x20, height
    blt     render


// close file and exit
exit:
    ldr     x0, fd
    mov     x8, #57
    svc     #0

    mov     x0, #1
    ldr     x1, =done
    mov     x2, #36
    mov     x8, #64
    svc     #0

    mov     x0, #0
    mov     w8, #93
    svc     #0

.include "./src/ppm.inc"
.include "./src/init.inc"
.include "./src/hit.inc"
.include "./src/util.inc"
