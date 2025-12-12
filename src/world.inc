// the scene

// material kinds:
// 0 -> lambertian
// 1 -> metal
// 2 -> glass

    spheres:    .float 0.0, 0.0, -1.2, 0.0  // center
                .float 0.5                  // radius
                .word 0                     // material kind
                .float 0.1, 0.2, 0.5, 0.0   // material color
                .float 0.0                  // fuzz
                
                .float 0.0, -100.5, -1.0, 0.0
                .float 100.0
                .word 0
                .float 0.8, 0.8, 0.0, 0.0
                .float 0.0
