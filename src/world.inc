// the scene

// material kinds:
// 0 -> lambertian
// 1 -> metal
// 2 -> glass

    obj_count = 4

    spheres:    .float 0.0, -1000.0, 0.0, 0.0 // center
                .float 1000                   // radius
                .word 0                       // material kind
                .float 0.5, 0.5, 0.5, 0.0     // material color
                .float 0.0                    // fuzz
                
                .float 0.0, 1, 0.0, 0.0
                .float 1.0
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -4.0, 1.0, 0.0, 0.0
                .float 1.0
                .word 0
                .float 0.4, 0.2, 0.1, 0.0
                .float 0.0

                .float 4.0, 1.0, 0.0, 0.0
                .float 1.0
                .word 1
                .float 0.7, 0.6, 0.5, 0.0
                .float 0.0
