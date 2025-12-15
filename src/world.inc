// the scene

// material kinds:
// 0 -> lambertian
// 1 -> metal
// 2 -> glass

    obj_count = 487
    
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

                .float -10.84, 0.20, -10.51, 0.0
                .float 0.2
                .word 0
                .float 0.03, 0.14, 0.06, 0.0
                .float 0.0

                .float -10.75, 0.20, -9.10, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.02, 0.00, 0.0
                .float 0.0

                .float -10.78, 0.20, -8.76, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.15, 0.07, 0.0
                .float 0.0

                .float -10.42, 0.20, -7.98, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.10, 0.25, 0.0
                .float 0.0

                .float -10.89, 0.20, -6.15, 0.0
                .float 0.2
                .word 0
                .float 0.07, 0.03, 0.21, 0.0
                .float 0.0

                .float -10.72, 0.20, -5.72, 0.0
                .float 0.2
                .word 0
                .float 0.13, 0.11, 0.23, 0.0
                .float 0.0

                .float -10.34, 0.20, -4.35, 0.0
                .float 0.2
                .word 1
                .float 0.92, 0.54, 0.50, 0.0
                .float 0.42

                .float -10.71, 0.20, -3.75, 0.0
                .float 0.2
                .word 0
                .float 0.16, 0.22, 0.22, 0.0
                .float 0.0

                .float -10.76, 0.20, -2.20, 0.0
                .float 0.2
                .word 1
                .float 0.62, 0.65, 0.96, 0.0
                .float 0.19

                .float -10.78, 0.20, -1.15, 0.0
                .float 0.2
                .word 0
                .float 0.10, 0.19, 0.24, 0.0
                .float 0.0

                .float -10.37, 0.20, -0.88, 0.0
                .float 0.2
                .word 0
                .float 0.03, 0.02, 0.05, 0.0
                .float 0.0

                .float -10.23, 0.20, 0.01, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.00, 0.22, 0.0
                .float 0.0

                .float -10.78, 0.20, 1.27, 0.0
                .float 0.2
                .word 0
                .float 0.22, 0.04, 0.09, 0.0
                .float 0.0

                .float -10.87, 0.20, 2.05, 0.0
                .float 0.2
                .word 0
                .float 0.10, 0.09, 0.05, 0.0
                .float 0.0

                .float -10.31, 0.20, 3.55, 0.0
                .float 0.2
                .word 0
                .float 0.10, 0.25, 0.23, 0.0
                .float 0.0

                .float -10.66, 0.20, 4.62, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.21, 0.03, 0.0
                .float 0.0

                .float -10.94, 0.20, 5.61, 0.0
                .float 0.2
                .word 0
                .float 0.03, 0.15, 0.04, 0.0
                .float 0.0

                .float -10.10, 0.20, 6.77, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.18, 0.15, 0.0
                .float 0.0

                .float -10.26, 0.20, 7.79, 0.0
                .float 0.2
                .word 0
                .float 0.03, 0.07, 0.01, 0.0
                .float 0.0

                .float -10.72, 0.20, 8.03, 0.0
                .float 0.2
                .word 0
                .float 0.11, 0.11, 0.16, 0.0
                .float 0.0

                .float -10.67, 0.20, 9.75, 0.0
                .float 0.2
                .word 0
                .float 0.11, 0.17, 0.04, 0.0
                .float 0.0

                .float -10.51, 0.20, 10.67, 0.0
                .float 0.2
                .word 1
                .float 0.84, 0.93, 0.72, 0.0
                .float 0.42

                .float -9.23, 0.20, -10.74, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.01, 0.23, 0.0
                .float 0.0

                .float -9.86, 0.20, -9.19, 0.0
                .float 0.2
                .word 0
                .float 0.07, 0.04, 0.15, 0.0
                .float 0.0

                .float -9.48, 0.20, -8.82, 0.0
                .float 0.2
                .word 0
                .float 0.01, 0.16, 0.22, 0.0
                .float 0.0

                .float -9.64, 0.20, -7.56, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.04, 0.09, 0.0
                .float 0.0

                .float -9.67, 0.20, -6.17, 0.0
                .float 0.2
                .word 0
                .float 0.01, 0.19, 0.15, 0.0
                .float 0.0

                .float -9.21, 0.20, -5.43, 0.0
                .float 0.2
                .word 1
                .float 0.58, 0.98, 0.96, 0.0
                .float 0.03

                .float -9.90, 0.20, -4.26, 0.0
                .float 0.2
                .word 0
                .float 0.10, 0.25, 0.06, 0.0
                .float 0.0

                .float -9.14, 0.20, -3.82, 0.0
                .float 0.2
                .word 0
                .float 0.25, 0.21, 0.10, 0.0
                .float 0.0

                .float -9.65, 0.20, -2.69, 0.0
                .float 0.2
                .word 0
                .float 0.05, 0.13, 0.24, 0.0
                .float 0.0

                .float -9.49, 0.20, -1.62, 0.0
                .float 0.2
                .word 0
                .float 0.15, 0.05, 0.19, 0.0
                .float 0.0

                .float -9.56, 0.20, -0.25, 0.0
                .float 0.2
                .word 0
                .float 0.16, 0.20, 0.15, 0.0
                .float 0.0

                .float -9.36, 0.20, 0.82, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.07, 0.10, 0.0
                .float 0.0

                .float -9.46, 0.20, 1.22, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.06, 0.12, 0.0
                .float 0.0

                .float -9.56, 0.20, 2.55, 0.0
                .float 0.2
                .word 1
                .float 0.55, 0.91, 0.66, 0.0
                .float 0.03

                .float -9.65, 0.20, 3.67, 0.0
                .float 0.2
                .word 0
                .float 0.00, 0.24, 0.24, 0.0
                .float 0.0

                .float -9.55, 0.20, 4.70, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.14, 0.05, 0.0
                .float 0.0

                .float -9.22, 0.20, 5.43, 0.0
                .float 0.2
                .word 0
                .float 0.05, 0.19, 0.01, 0.0
                .float 0.0

                .float -9.27, 0.20, 6.02, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.06, 0.03, 0.0
                .float 0.0

                .float -9.64, 0.20, 7.78, 0.0
                .float 0.2
                .word 1
                .float 0.75, 0.84, 0.62, 0.0
                .float 0.28

                .float -9.93, 0.20, 8.89, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.23, 0.18, 0.0
                .float 0.0

                .float -9.47, 0.20, 9.64, 0.0
                .float 0.2
                .word 0
                .float 0.19, 0.07, 0.14, 0.0
                .float 0.0

                .float -9.45, 0.20, 10.69, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.14, 0.06, 0.0
                .float 0.0

                .float -8.43, 0.20, -10.50, 0.0
                .float 0.2
                .word 1
                .float 0.77, 0.90, 0.52, 0.0
                .float 0.47

                .float -8.39, 0.20, -9.12, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.06, 0.25, 0.0
                .float 0.0

                .float -8.60, 0.20, -8.81, 0.0
                .float 0.2
                .word 0
                .float 0.13, 0.04, 0.12, 0.0
                .float 0.0

                .float -8.89, 0.20, -7.23, 0.0
                .float 0.2
                .word 1
                .float 0.93, 0.57, 0.69, 0.0
                .float 0.24

                .float -8.18, 0.20, -6.48, 0.0
                .float 0.2
                .word 0
                .float 0.11, 0.21, 0.23, 0.0
                .float 0.0

                .float -8.99, 0.20, -5.33, 0.0
                .float 0.2
                .word 0
                .float 0.20, 0.20, 0.10, 0.0
                .float 0.0

                .float -8.56, 0.20, -4.32, 0.0
                .float 0.2
                .word 1
                .float 0.92, 0.99, 0.91, 0.0
                .float 0.14

                .float -8.83, 0.20, -3.48, 0.0
                .float 0.2
                .word 1
                .float 0.67, 0.52, 0.97, 0.0
                .float 0.10

                .float -8.23, 0.20, -2.28, 0.0
                .float 0.2
                .word 0
                .float 0.06, 0.07, 0.06, 0.0
                .float 0.0

                .float -8.27, 0.20, -1.48, 0.0
                .float 0.2
                .word 0
                .float 0.16, 0.13, 0.18, 0.0
                .float 0.0

                .float -8.66, 0.20, -0.13, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.09, 0.00, 0.0
                .float 0.0

                .float -8.17, 0.20, 0.19, 0.0
                .float 0.2
                .word 1
                .float 0.95, 0.52, 0.57, 0.0
                .float 0.04

                .float -8.44, 0.20, 1.87, 0.0
                .float 0.2
                .word 0
                .float 0.16, 0.22, 0.15, 0.0
                .float 0.0

                .float -8.54, 0.20, 2.63, 0.0
                .float 0.2
                .word 1
                .float 0.87, 0.99, 0.59, 0.0
                .float 0.27

                .float -8.50, 0.20, 3.79, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.14, 0.14, 0.0
                .float 0.0

                .float -8.97, 0.20, 4.09, 0.0
                .float 0.2
                .word 0
                .float 0.10, 0.03, 0.16, 0.0
                .float 0.0

                .float -8.44, 0.20, 5.87, 0.0
                .float 0.2
                .word 0
                .float 0.17, 0.03, 0.16, 0.0
                .float 0.0

                .float -8.74, 0.20, 6.06, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.24, 0.17, 0.0
                .float 0.0

                .float -8.59, 0.20, 7.61, 0.0
                .float 0.2
                .word 0
                .float 0.05, 0.16, 0.20, 0.0
                .float 0.0

                .float -8.33, 0.20, 8.19, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.07, 0.06, 0.0
                .float 0.0

                .float -8.55, 0.20, 9.27, 0.0
                .float 0.2
                .word 0
                .float 0.06, 0.18, 0.11, 0.0
                .float 0.0

                .float -8.19, 0.20, 10.30, 0.0
                .float 0.2
                .word 0
                .float 0.11, 0.00, 0.13, 0.0
                .float 0.0

                .float -7.92, 0.20, -10.74, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.06, 0.14, 0.0
                .float 0.0

                .float -7.26, 0.20, -9.38, 0.0
                .float 0.2
                .word 0
                .float 0.11, 0.22, 0.22, 0.0
                .float 0.0

                .float -7.80, 0.20, -8.42, 0.0
                .float 0.2
                .word 0
                .float 0.22, 0.14, 0.09, 0.0
                .float 0.0

                .float -7.87, 0.20, -7.93, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.08, 0.10, 0.0
                .float 0.0

                .float -7.15, 0.20, -6.81, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.17, 0.18, 0.0
                .float 0.0

                .float -7.21, 0.20, -5.32, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.23, 0.06, 0.0
                .float 0.0

                .float -7.98, 0.20, -4.34, 0.0
                .float 0.2
                .word 1
                .float 0.63, 0.58, 0.92, 0.0
                .float 0.07

                .float -7.65, 0.20, -3.57, 0.0
                .float 0.2
                .word 0
                .float 0.07, 0.01, 0.15, 0.0
                .float 0.0

                .float -7.61, 0.20, -2.88, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.11, 0.17, 0.0
                .float 0.0

                .float -7.23, 0.20, -1.40, 0.0
                .float 0.2
                .word 0
                .float 0.05, 0.08, 0.04, 0.0
                .float 0.0

                .float -7.92, 0.20, -0.93, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.25, 0.11, 0.0
                .float 0.0

                .float -7.48, 0.20, 0.64, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.22, 0.05, 0.0
                .float 0.0

                .float -7.11, 0.20, 1.24, 0.0
                .float 0.2
                .word 0
                .float 0.06, 0.14, 0.19, 0.0
                .float 0.0

                .float -7.24, 0.20, 2.89, 0.0
                .float 0.2
                .word 1
                .float 0.57, 0.95, 0.66, 0.0
                .float 0.42

                .float -7.31, 0.20, 3.89, 0.0
                .float 0.2
                .word 0
                .float 0.25, 0.08, 0.10, 0.0
                .float 0.0

                .float -7.94, 0.20, 4.35, 0.0
                .float 0.2
                .word 0
                .float 0.16, 0.09, 0.24, 0.0
                .float 0.0

                .float -7.81, 0.20, 5.08, 0.0
                .float 0.2
                .word 0
                .float 0.01, 0.24, 0.14, 0.0
                .float 0.0

                .float -7.96, 0.20, 6.21, 0.0
                .float 0.2
                .word 0
                .float 0.07, 0.20, 0.24, 0.0
                .float 0.0

                .float -7.89, 0.20, 7.69, 0.0
                .float 0.2
                .word 1
                .float 0.63, 0.84, 0.59, 0.0
                .float 0.05

                .float -7.60, 0.20, 8.14, 0.0
                .float 0.2
                .word 0
                .float 0.11, 0.12, 0.18, 0.0
                .float 0.0

                .float -7.55, 0.20, 9.77, 0.0
                .float 0.2
                .word 0
                .float 0.03, 0.06, 0.06, 0.0
                .float 0.0

                .float -7.70, 0.20, 10.29, 0.0
                .float 0.2
                .word 0
                .float 0.10, 0.07, 0.04, 0.0
                .float 0.0

                .float -6.61, 0.20, -10.53, 0.0
                .float 0.2
                .word 0
                .float 0.18, 0.08, 0.09, 0.0
                .float 0.0

                .float -6.26, 0.20, -9.93, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.19, 0.09, 0.0
                .float 0.0

                .float -6.84, 0.20, -8.83, 0.0
                .float 0.2
                .word 0
                .float 0.13, 0.15, 0.00, 0.0
                .float 0.0

                .float -6.77, 0.20, -7.90, 0.0
                .float 0.2
                .word 1
                .float 0.77, 0.62, 0.55, 0.0
                .float 0.39

                .float -6.49, 0.20, -6.63, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.17, 0.13, 0.0
                .float 0.0

                .float -6.65, 0.20, -5.81, 0.0
                .float 0.2
                .word 1
                .float 0.54, 0.76, 0.64, 0.0
                .float 0.46

                .float -6.47, 0.20, -4.57, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -6.69, 0.20, -3.22, 0.0
                .float 0.2
                .word 0
                .float 0.13, 0.10, 0.18, 0.0
                .float 0.0

                .float -6.86, 0.20, -2.63, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -6.76, 0.20, -1.75, 0.0
                .float 0.2
                .word 0
                .float 0.13, 0.09, 0.07, 0.0
                .float 0.0

                .float -6.94, 0.20, -0.29, 0.0
                .float 0.2
                .word 0
                .float 0.01, 0.12, 0.05, 0.0
                .float 0.0

                .float -6.62, 0.20, 0.63, 0.0
                .float 0.2
                .word 0
                .float 0.13, 0.06, 0.10, 0.0
                .float 0.0

                .float -6.62, 0.20, 1.73, 0.0
                .float 0.2
                .word 1
                .float 0.71, 0.58, 0.87, 0.0
                .float 0.30

                .float -6.37, 0.20, 2.13, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.14, 0.06, 0.0
                .float 0.0

                .float -6.90, 0.20, 3.75, 0.0
                .float 0.2
                .word 0
                .float 0.15, 0.05, 0.00, 0.0
                .float 0.0

                .float -6.38, 0.20, 4.89, 0.0
                .float 0.2
                .word 0
                .float 0.18, 0.12, 0.22, 0.0
                .float 0.0

                .float -6.88, 0.20, 5.16, 0.0
                .float 0.2
                .word 0
                .float 0.16, 0.10, 0.10, 0.0
                .float 0.0

                .float -6.94, 0.20, 6.20, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.09, 0.00, 0.0
                .float 0.0

                .float -6.92, 0.20, 7.07, 0.0
                .float 0.2
                .word 0
                .float 0.10, 0.23, 0.18, 0.0
                .float 0.0

                .float -6.42, 0.20, 8.03, 0.0
                .float 0.2
                .word 0
                .float 0.10, 0.16, 0.19, 0.0
                .float 0.0

                .float -6.64, 0.20, 9.30, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.01, 0.05, 0.0
                .float 0.0

                .float -6.13, 0.20, 10.17, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.21, 0.20, 0.0
                .float 0.0

                .float -5.67, 0.20, -10.19, 0.0
                .float 0.2
                .word 0
                .float 0.16, 0.10, 0.10, 0.0
                .float 0.0

                .float -5.40, 0.20, -9.57, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.22, 0.10, 0.0
                .float 0.0

                .float -5.52, 0.20, -8.54, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.22, 0.02, 0.0
                .float 0.0

                .float -5.26, 0.20, -7.73, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.10, 0.12, 0.0
                .float 0.0

                .float -5.31, 0.20, -6.68, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.08, 0.13, 0.0
                .float 0.0

                .float -5.15, 0.20, -5.38, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.08, 0.20, 0.0
                .float 0.0

                .float -5.69, 0.20, -5.00, 0.0
                .float 0.2
                .word 0
                .float 0.20, 0.21, 0.03, 0.0
                .float 0.0

                .float -5.81, 0.20, -3.67, 0.0
                .float 0.2
                .word 0
                .float 0.16, 0.11, 0.14, 0.0
                .float 0.0

                .float -5.35, 0.20, -2.76, 0.0
                .float 0.2
                .word 1
                .float 0.57, 0.91, 0.62, 0.0
                .float 0.30

                .float -5.47, 0.20, -1.48, 0.0
                .float 0.2
                .word 0
                .float 0.18, 0.23, 0.19, 0.0
                .float 0.0

                .float -5.39, 0.20, -0.46, 0.0
                .float 0.2
                .word 0
                .float 0.16, 0.23, 0.24, 0.0
                .float 0.0

                .float -5.11, 0.20, 0.84, 0.0
                .float 0.2
                .word 0
                .float 0.20, 0.19, 0.10, 0.0
                .float 0.0

                .float -5.99, 0.20, 1.12, 0.0
                .float 0.2
                .word 0
                .float 0.16, 0.15, 0.15, 0.0
                .float 0.0

                .float -5.67, 0.20, 2.77, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.17, 0.17, 0.0
                .float 0.0

                .float -5.91, 0.20, 3.24, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.00, 0.04, 0.0
                .float 0.0

                .float -5.87, 0.20, 4.61, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.08, 0.17, 0.0
                .float 0.0

                .float -5.73, 0.20, 5.27, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.03, 0.10, 0.0
                .float 0.0

                .float -5.16, 0.20, 6.11, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.19, 0.03, 0.0
                .float 0.0

                .float -5.51, 0.20, 7.12, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -5.12, 0.20, 8.56, 0.0
                .float 0.2
                .word 0
                .float 0.16, 0.18, 0.23, 0.0
                .float 0.0

                .float -5.21, 0.20, 9.09, 0.0
                .float 0.2
                .word 1
                .float 0.51, 0.63, 0.80, 0.0
                .float 0.39

                .float -5.48, 0.20, 10.83, 0.0
                .float 0.2
                .word 0
                .float 0.22, 0.06, 0.02, 0.0
                .float 0.0

                .float -4.63, 0.20, -10.70, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.11, 0.24, 0.0
                .float 0.0

                .float -4.72, 0.20, -9.81, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.09, 0.01, 0.0
                .float 0.0

                .float -4.25, 0.20, -8.13, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.17, 0.15, 0.0
                .float 0.0

                .float -4.68, 0.20, -7.28, 0.0
                .float 0.2
                .word 0
                .float 0.10, 0.01, 0.03, 0.0
                .float 0.0

                .float -4.86, 0.20, -6.43, 0.0
                .float 0.2
                .word 0
                .float 0.15, 0.13, 0.07, 0.0
                .float 0.0

                .float -4.40, 0.20, -5.17, 0.0
                .float 0.2
                .word 0
                .float 0.03, 0.07, 0.01, 0.0
                .float 0.0

                .float -4.93, 0.20, -4.48, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.11, 0.15, 0.0
                .float 0.0

                .float -4.83, 0.20, -3.76, 0.0
                .float 0.2
                .word 0
                .float 0.22, 0.19, 0.07, 0.0
                .float 0.0

                .float -4.57, 0.20, -2.90, 0.0
                .float 0.2
                .word 0
                .float 0.25, 0.12, 0.03, 0.0
                .float 0.0

                .float -4.89, 0.20, -1.41, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.06, 0.06, 0.0
                .float 0.0

                .float -4.62, 0.20, -0.17, 0.0
                .float 0.2
                .word 0
                .float 0.01, 0.01, 0.11, 0.0
                .float 0.0

                .float -4.94, 0.20, 0.10, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.06, 0.11, 0.0
                .float 0.0

                .float -4.17, 0.20, 1.40, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.08, 0.11, 0.0
                .float 0.0

                .float -4.32, 0.20, 2.72, 0.0
                .float 0.2
                .word 0
                .float 0.20, 0.20, 0.01, 0.0
                .float 0.0

                .float -4.16, 0.20, 3.83, 0.0
                .float 0.2
                .word 0
                .float 0.17, 0.02, 0.24, 0.0
                .float 0.0

                .float -4.16, 0.20, 4.45, 0.0
                .float 0.2
                .word 1
                .float 0.55, 0.76, 0.95, 0.0
                .float 0.26

                .float -4.46, 0.20, 5.01, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.07, 0.24, 0.0
                .float 0.0

                .float -4.24, 0.20, 6.64, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.01, 0.03, 0.0
                .float 0.0

                .float -4.92, 0.20, 7.75, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.16, 0.18, 0.0
                .float 0.0

                .float -4.24, 0.20, 8.50, 0.0
                .float 0.2
                .word 0
                .float 0.13, 0.16, 0.09, 0.0
                .float 0.0

                .float -4.60, 0.20, 9.12, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.17, 0.04, 0.0
                .float 0.0

                .float -4.94, 0.20, 10.23, 0.0
                .float 0.2
                .word 0
                .float 0.15, 0.05, 0.11, 0.0
                .float 0.0

                .float -3.51, 0.20, -10.97, 0.0
                .float 0.2
                .word 0
                .float 0.05, 0.09, 0.05, 0.0
                .float 0.0

                .float -3.72, 0.20, -9.58, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.09, 0.16, 0.0
                .float 0.0

                .float -3.38, 0.20, -8.81, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.18, 0.21, 0.0
                .float 0.0

                .float -3.58, 0.20, -7.84, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -3.36, 0.20, -6.35, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.20, 0.22, 0.0
                .float 0.0

                .float -3.98, 0.20, -5.67, 0.0
                .float 0.2
                .word 0
                .float 0.11, 0.23, 0.03, 0.0
                .float 0.0

                .float -3.45, 0.20, -4.90, 0.0
                .float 0.2
                .word 0
                .float 0.20, 0.11, 0.24, 0.0
                .float 0.0

                .float -3.26, 0.20, -3.64, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.02, 0.13, 0.0
                .float 0.0

                .float -3.38, 0.20, -2.84, 0.0
                .float 0.2
                .word 0
                .float 0.13, 0.16, 0.11, 0.0
                .float 0.0

                .float -3.55, 0.20, -1.68, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.05, 0.23, 0.0
                .float 0.0

                .float -3.97, 0.20, -0.79, 0.0
                .float 0.2
                .word 0
                .float 0.03, 0.17, 0.05, 0.0
                .float 0.0

                .float -3.79, 0.20, 0.27, 0.0
                .float 0.2
                .word 0
                .float 0.18, 0.03, 0.19, 0.0
                .float 0.0

                .float -3.40, 0.20, 1.84, 0.0
                .float 0.2
                .word 0
                .float 0.25, 0.10, 0.06, 0.0
                .float 0.0

                .float -3.54, 0.20, 2.10, 0.0
                .float 0.2
                .word 0
                .float 0.19, 0.16, 0.02, 0.0
                .float 0.0

                .float -3.82, 0.20, 3.13, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.07, 0.16, 0.0
                .float 0.0

                .float -3.74, 0.20, 4.29, 0.0
                .float 0.2
                .word 1
                .float 0.80, 0.72, 0.78, 0.0
                .float 0.41

                .float -3.39, 0.20, 5.78, 0.0
                .float 0.2
                .word 0
                .float 0.10, 0.24, 0.23, 0.0
                .float 0.0

                .float -3.95, 0.20, 6.81, 0.0
                .float 0.2
                .word 0
                .float 0.01, 0.08, 0.08, 0.0
                .float 0.0

                .float -3.49, 0.20, 7.39, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.02, 0.20, 0.0
                .float 0.0

                .float -3.52, 0.20, 8.20, 0.0
                .float 0.2
                .word 0
                .float 0.22, 0.13, 0.21, 0.0
                .float 0.0

                .float -3.84, 0.20, 9.76, 0.0
                .float 0.2
                .word 0
                .float 0.19, 0.07, 0.07, 0.0
                .float 0.0

                .float -3.48, 0.20, 10.86, 0.0
                .float 0.2
                .word 0
                .float 0.18, 0.09, 0.03, 0.0
                .float 0.0

                .float -2.44, 0.20, -10.63, 0.0
                .float 0.2
                .word 0
                .float 0.17, 0.11, 0.08, 0.0
                .float 0.0

                .float -2.10, 0.20, -9.98, 0.0
                .float 0.2
                .word 0
                .float 0.18, 0.09, 0.21, 0.0
                .float 0.0

                .float -2.52, 0.20, -8.20, 0.0
                .float 0.2
                .word 0
                .float 0.19, 0.19, 0.14, 0.0
                .float 0.0

                .float -2.45, 0.20, -7.15, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.18, 0.17, 0.0
                .float 0.0

                .float -2.46, 0.20, -6.74, 0.0
                .float 0.2
                .word 0
                .float 0.18, 0.00, 0.25, 0.0
                .float 0.0

                .float -2.24, 0.20, -5.43, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.08, 0.22, 0.0
                .float 0.0

                .float -2.84, 0.20, -4.71, 0.0
                .float 0.2
                .word 1
                .float 0.97, 0.53, 0.62, 0.0
                .float 0.38

                .float -2.47, 0.20, -3.89, 0.0
                .float 0.2
                .word 1
                .float 0.67, 0.95, 0.69, 0.0
                .float 0.48

                .float -2.24, 0.20, -2.28, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.12, 0.22, 0.0
                .float 0.0

                .float -2.24, 0.20, -1.88, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.03, 0.12, 0.0
                .float 0.0

                .float -2.57, 0.20, -0.52, 0.0
                .float 0.2
                .word 0
                .float 0.20, 0.10, 0.12, 0.0
                .float 0.0

                .float -2.89, 0.20, 0.26, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.13, 0.05, 0.0
                .float 0.0

                .float -2.31, 0.20, 1.58, 0.0
                .float 0.2
                .word 0
                .float 0.03, 0.14, 0.10, 0.0
                .float 0.0

                .float -2.95, 0.20, 2.35, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.24, 0.17, 0.0
                .float 0.0

                .float -2.80, 0.20, 3.71, 0.0
                .float 0.2
                .word 1
                .float 0.92, 0.82, 0.98, 0.0
                .float 0.15

                .float -2.90, 0.20, 4.44, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.22, 0.03, 0.0
                .float 0.0

                .float -2.96, 0.20, 5.16, 0.0
                .float 0.2
                .word 0
                .float 0.06, 0.17, 0.19, 0.0
                .float 0.0

                .float -2.11, 0.20, 6.31, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.22, 0.05, 0.0
                .float 0.0

                .float -2.86, 0.20, 7.24, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.05, 0.02, 0.0
                .float 0.0

                .float -2.36, 0.20, 8.90, 0.0
                .float 0.2
                .word 1
                .float 0.77, 0.82, 0.94, 0.0
                .float 0.42

                .float -2.33, 0.20, 9.33, 0.0
                .float 0.2
                .word 0
                .float 0.17, 0.06, 0.15, 0.0
                .float 0.0

                .float -2.37, 0.20, 10.39, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.03, 0.22, 0.0
                .float 0.0

                .float -1.18, 0.20, -10.58, 0.0
                .float 0.2
                .word 0
                .float 0.00, 0.09, 0.22, 0.0
                .float 0.0

                .float -1.85, 0.20, -9.44, 0.0
                .float 0.2
                .word 0
                .float 0.17, 0.21, 0.09, 0.0
                .float 0.0

                .float -1.66, 0.20, -8.25, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.12, 0.04, 0.0
                .float 0.0

                .float -1.30, 0.20, -7.81, 0.0
                .float 0.2
                .word 0
                .float 0.06, 0.22, 0.20, 0.0
                .float 0.0

                .float -1.26, 0.20, -6.48, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.13, 0.09, 0.0
                .float 0.0

                .float -1.24, 0.20, -5.62, 0.0
                .float 0.2
                .word 1
                .float 0.76, 0.72, 0.58, 0.0
                .float 0.19

                .float -1.46, 0.20, -4.29, 0.0
                .float 0.2
                .word 0
                .float 0.07, 0.15, 0.00, 0.0
                .float 0.0

                .float -1.42, 0.20, -3.60, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.23, 0.12, 0.0
                .float 0.0

                .float -1.69, 0.20, -2.89, 0.0
                .float 0.2
                .word 0
                .float 0.15, 0.25, 0.20, 0.0
                .float 0.0

                .float -1.63, 0.20, -1.49, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.02, 0.09, 0.0
                .float 0.0

                .float -1.81, 0.20, -0.56, 0.0
                .float 0.2
                .word 0
                .float 0.18, 0.23, 0.08, 0.0
                .float 0.0

                .float -1.91, 0.20, 0.47, 0.0
                .float 0.2
                .word 0
                .float 0.19, 0.20, 0.18, 0.0
                .float 0.0

                .float -1.30, 0.20, 1.39, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.00, 0.02, 0.0
                .float 0.0

                .float -1.50, 0.20, 2.31, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.23, 0.05, 0.0
                .float 0.0

                .float -1.68, 0.20, 3.31, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.18, 0.21, 0.0
                .float 0.0

                .float -1.36, 0.20, 4.82, 0.0
                .float 0.2
                .word 0
                .float 0.22, 0.16, 0.06, 0.0
                .float 0.0

                .float -1.82, 0.20, 5.67, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.12, 0.13, 0.0
                .float 0.0

                .float -1.98, 0.20, 6.24, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -1.82, 0.20, 7.32, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -1.75, 0.20, 8.82, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.12, 0.06, 0.0
                .float 0.0

                .float -1.40, 0.20, 9.76, 0.0
                .float 0.2
                .word 0
                .float 0.11, 0.05, 0.08, 0.0
                .float 0.0

                .float -1.78, 0.20, 10.83, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.20, 0.21, 0.0
                .float 0.0

                .float -0.30, 0.20, -10.10, 0.0
                .float 0.2
                .word 0
                .float 0.13, 0.07, 0.02, 0.0
                .float 0.0

                .float -0.94, 0.20, -9.71, 0.0
                .float 0.2
                .word 0
                .float 0.01, 0.13, 0.18, 0.0
                .float 0.0

                .float -0.99, 0.20, -8.28, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.07, 0.03, 0.0
                .float 0.0

                .float -0.47, 0.20, -7.14, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -0.83, 0.20, -6.66, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.16, 0.02, 0.0
                .float 0.0

                .float -0.36, 0.20, -5.84, 0.0
                .float 0.2
                .word 1
                .float 0.79, 0.98, 0.94, 0.0
                .float 0.09

                .float -0.56, 0.20, -4.84, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.13, 0.16, 0.0
                .float 0.0

                .float -0.47, 0.20, -3.98, 0.0
                .float 0.2
                .word 0
                .float 0.15, 0.21, 0.25, 0.0
                .float 0.0

                .float -0.16, 0.20, -2.90, 0.0
                .float 0.2
                .word 0
                .float 0.13, 0.02, 0.02, 0.0
                .float 0.0

                .float -0.36, 0.20, -1.59, 0.0
                .float 0.2
                .word 0
                .float 0.05, 0.02, 0.08, 0.0
                .float 0.0

                .float -0.17, 0.20, -0.77, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.06, 0.02, 0.0
                .float 0.0

                .float -0.40, 0.20, 0.64, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.06, 0.19, 0.0
                .float 0.0

                .float -0.48, 0.20, 1.76, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.11, 0.15, 0.0
                .float 0.0

                .float -0.15, 0.20, 2.33, 0.0
                .float 0.2
                .word 0
                .float 0.01, 0.22, 0.20, 0.0
                .float 0.0

                .float -0.89, 0.20, 3.55, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.20, 0.08, 0.0
                .float 0.0

                .float -0.40, 0.20, 4.67, 0.0
                .float 0.2
                .word 0
                .float 0.22, 0.06, 0.20, 0.0
                .float 0.0

                .float -0.15, 0.20, 5.81, 0.0
                .float 0.2
                .word 0
                .float 0.05, 0.21, 0.20, 0.0
                .float 0.0

                .float -0.14, 0.20, 6.38, 0.0
                .float 0.2
                .word 0
                .float 0.19, 0.09, 0.02, 0.0
                .float 0.0

                .float -0.67, 0.20, 7.27, 0.0
                .float 0.2
                .word 0
                .float 0.03, 0.09, 0.08, 0.0
                .float 0.0

                .float -0.18, 0.20, 8.43, 0.0
                .float 0.2
                .word 1
                .float 0.58, 0.91, 0.88, 0.0
                .float 0.25

                .float -0.56, 0.20, 9.44, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.18, 0.23, 0.0
                .float 0.0

                .float -0.74, 0.20, 10.57, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.12, 0.06, 0.0
                .float 0.0

                .float 0.41, 0.20, -10.19, 0.0
                .float 0.2
                .word 1
                .float 0.60, 0.63, 0.97, 0.0
                .float 0.28

                .float 0.51, 0.20, -9.66, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.18, 0.15, 0.0
                .float 0.0

                .float 0.35, 0.20, -8.42, 0.0
                .float 0.2
                .word 0
                .float 0.05, 0.10, 0.06, 0.0
                .float 0.0

                .float 0.63, 0.20, -7.20, 0.0
                .float 0.2
                .word 0
                .float 0.01, 0.15, 0.07, 0.0
                .float 0.0

                .float 0.31, 0.20, -6.78, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.18, 0.24, 0.0
                .float 0.0

                .float 0.25, 0.20, -5.44, 0.0
                .float 0.2
                .word 1
                .float 0.74, 0.94, 0.89, 0.0
                .float 0.02

                .float 0.40, 0.20, -4.86, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.22, 0.08, 0.0
                .float 0.0

                .float 0.68, 0.20, -3.55, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.22, 0.08, 0.0
                .float 0.0

                .float 0.60, 0.20, -2.30, 0.0
                .float 0.2
                .word 0
                .float 0.18, 0.10, 0.24, 0.0
                .float 0.0

                .float 0.05, 0.20, -1.42, 0.0
                .float 0.2
                .word 0
                .float 0.22, 0.09, 0.17, 0.0
                .float 0.0

                .float 0.16, 0.20, -0.11, 0.0
                .float 0.2
                .word 0
                .float 0.16, 0.22, 0.07, 0.0
                .float 0.0

                .float 0.63, 0.20, 0.28, 0.0
                .float 0.2
                .word 0
                .float 0.11, 0.17, 0.08, 0.0
                .float 0.0

                .float 0.65, 0.20, 1.38, 0.0
                .float 0.2
                .word 1
                .float 0.89, 0.69, 0.86, 0.0
                .float 0.04

                .float 0.05, 0.20, 2.44, 0.0
                .float 0.2
                .word 0
                .float 0.19, 0.22, 0.18, 0.0
                .float 0.0

                .float 0.75, 0.20, 3.48, 0.0
                .float 0.2
                .word 0
                .float 0.18, 0.22, 0.02, 0.0
                .float 0.0

                .float 0.81, 0.20, 4.80, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.19, 0.22, 0.0
                .float 0.0

                .float 0.23, 0.20, 5.06, 0.0
                .float 0.2
                .word 0
                .float 0.17, 0.18, 0.16, 0.0
                .float 0.0

                .float 0.37, 0.20, 6.14, 0.0
                .float 0.2
                .word 0
                .float 0.05, 0.14, 0.05, 0.0
                .float 0.0

                .float 0.24, 0.20, 7.54, 0.0
                .float 0.2
                .word 0
                .float 0.01, 0.09, 0.14, 0.0
                .float 0.0

                .float 0.67, 0.20, 8.18, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.23, 0.25, 0.0
                .float 0.0

                .float 0.22, 0.20, 9.74, 0.0
                .float 0.2
                .word 1
                .float 0.92, 0.69, 0.82, 0.0
                .float 0.37

                .float 0.57, 0.20, 10.63, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.11, 0.18, 0.0
                .float 0.0

                .float 1.65, 0.20, -10.46, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.04, 0.10, 0.0
                .float 0.0

                .float 1.16, 0.20, -9.33, 0.0
                .float 0.2
                .word 0
                .float 0.05, 0.03, 0.16, 0.0
                .float 0.0

                .float 1.86, 0.20, -8.71, 0.0
                .float 0.2
                .word 0
                .float 0.03, 0.06, 0.18, 0.0
                .float 0.0

                .float 1.33, 0.20, -7.94, 0.0
                .float 0.2
                .word 0
                .float 0.05, 0.11, 0.06, 0.0
                .float 0.0

                .float 1.85, 0.20, -6.93, 0.0
                .float 0.2
                .word 1
                .float 0.51, 0.70, 0.69, 0.0
                .float 0.38

                .float 1.10, 0.20, -5.13, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 1.02, 0.20, -4.90, 0.0
                .float 0.2
                .word 0
                .float 0.05, 0.21, 0.10, 0.0
                .float 0.0

                .float 1.36, 0.20, -3.12, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.07, 0.19, 0.0
                .float 0.0

                .float 1.44, 0.20, -2.51, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.15, 0.02, 0.0
                .float 0.0

                .float 1.06, 0.20, -1.95, 0.0
                .float 0.2
                .word 0
                .float 0.00, 0.03, 0.06, 0.0
                .float 0.0

                .float 1.04, 0.20, -0.53, 0.0
                .float 0.2
                .word 0
                .float 0.20, 0.16, 0.14, 0.0
                .float 0.0

                .float 1.68, 0.20, 0.59, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.21, 0.13, 0.0
                .float 0.0

                .float 1.45, 0.20, 1.23, 0.0
                .float 0.2
                .word 0
                .float 0.13, 0.16, 0.20, 0.0
                .float 0.0

                .float 1.26, 0.20, 2.10, 0.0
                .float 0.2
                .word 0
                .float 0.19, 0.24, 0.24, 0.0
                .float 0.0

                .float 1.74, 0.20, 3.03, 0.0
                .float 0.2
                .word 0
                .float 0.03, 0.01, 0.03, 0.0
                .float 0.0

                .float 1.31, 0.20, 4.08, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.22, 0.07, 0.0
                .float 0.0

                .float 1.46, 0.20, 5.58, 0.0
                .float 0.2
                .word 1
                .float 0.60, 0.87, 0.90, 0.0
                .float 0.36

                .float 1.22, 0.20, 6.05, 0.0
                .float 0.2
                .word 0
                .float 0.19, 0.17, 0.01, 0.0
                .float 0.0

                .float 1.06, 0.20, 7.71, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.19, 0.08, 0.0
                .float 0.0

                .float 1.59, 0.20, 8.70, 0.0
                .float 0.2
                .word 0
                .float 0.20, 0.21, 0.12, 0.0
                .float 0.0

                .float 1.12, 0.20, 9.82, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.20, 0.10, 0.0
                .float 0.0

                .float 1.53, 0.20, 10.39, 0.0
                .float 0.2
                .word 0
                .float 0.20, 0.04, 0.04, 0.0
                .float 0.0

                .float 2.46, 0.20, -10.63, 0.0
                .float 0.2
                .word 0
                .float 0.19, 0.05, 0.22, 0.0
                .float 0.0

                .float 2.70, 0.20, -9.77, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.02, 0.10, 0.0
                .float 0.0

                .float 2.45, 0.20, -8.32, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.13, 0.25, 0.0
                .float 0.0

                .float 2.27, 0.20, -7.40, 0.0
                .float 0.2
                .word 1
                .float 0.71, 0.87, 0.85, 0.0
                .float 0.41

                .float 2.30, 0.20, -6.88, 0.0
                .float 0.2
                .word 0
                .float 0.03, 0.08, 0.08, 0.0
                .float 0.0

                .float 2.56, 0.20, -5.35, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.23, 0.09, 0.0
                .float 0.0

                .float 2.13, 0.20, -4.85, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.06, 0.11, 0.0
                .float 0.0

                .float 2.73, 0.20, -3.99, 0.0
                .float 0.2
                .word 0
                .float 0.16, 0.14, 0.15, 0.0
                .float 0.0

                .float 2.85, 0.20, -2.81, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.24, 0.05, 0.0
                .float 0.0

                .float 2.16, 0.20, -1.73, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.10, 0.16, 0.0
                .float 0.0

                .float 2.58, 0.20, -0.97, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.10, 0.07, 0.0
                .float 0.0

                .float 2.47, 0.20, 0.50, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.22, 0.18, 0.0
                .float 0.0

                .float 2.89, 0.20, 1.61, 0.0
                .float 0.2
                .word 0
                .float 0.15, 0.08, 0.07, 0.0
                .float 0.0

                .float 2.19, 0.20, 2.24, 0.0
                .float 0.2
                .word 0
                .float 0.18, 0.16, 0.11, 0.0
                .float 0.0

                .float 2.84, 0.20, 3.73, 0.0
                .float 0.2
                .word 0
                .float 0.07, 0.04, 0.04, 0.0
                .float 0.0

                .float 2.84, 0.20, 4.71, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.23, 0.15, 0.0
                .float 0.0

                .float 2.54, 0.20, 5.40, 0.0
                .float 0.2
                .word 0
                .float 0.01, 0.25, 0.00, 0.0
                .float 0.0

                .float 2.67, 0.20, 6.89, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.15, 0.01, 0.0
                .float 0.0

                .float 2.66, 0.20, 7.71, 0.0
                .float 0.2
                .word 0
                .float 0.05, 0.13, 0.23, 0.0
                .float 0.0

                .float 2.58, 0.20, 8.40, 0.0
                .float 0.2
                .word 0
                .float 0.10, 0.18, 0.22, 0.0
                .float 0.0

                .float 2.48, 0.20, 9.60, 0.0
                .float 0.2
                .word 0
                .float 0.18, 0.24, 0.15, 0.0
                .float 0.0

                .float 2.29, 0.20, 10.52, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.15, 0.01, 0.0
                .float 0.0

                .float 3.43, 0.20, -10.67, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.21, 0.15, 0.0
                .float 0.0

                .float 3.18, 0.20, -9.50, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.19, 0.22, 0.0
                .float 0.0

                .float 3.38, 0.20, -8.63, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.20, 0.02, 0.0
                .float 0.0

                .float 3.03, 0.20, -7.70, 0.0
                .float 0.2
                .word 0
                .float 0.17, 0.01, 0.17, 0.0
                .float 0.0

                .float 3.26, 0.20, -6.66, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.21, 0.22, 0.0
                .float 0.0

                .float 3.31, 0.20, -5.71, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.13, 0.02, 0.0
                .float 0.0

                .float 3.85, 0.20, -4.36, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.05, 0.10, 0.0
                .float 0.0

                .float 3.20, 0.20, -3.44, 0.0
                .float 0.2
                .word 1
                .float 0.78, 0.89, 0.81, 0.0
                .float 0.31

                .float 3.73, 0.20, -2.15, 0.0
                .float 0.2
                .word 0
                .float 0.13, 0.25, 0.01, 0.0
                .float 0.0

                .float 3.72, 0.20, -1.66, 0.0
                .float 0.2
                .word 0
                .float 0.03, 0.05, 0.05, 0.0
                .float 0.0

                .float 3.33, 0.20, -0.95, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.22, 0.04, 0.0
                .float 0.0

                .float 3.13, 0.20, 0.89, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.21, 0.21, 0.0
                .float 0.0

                .float 3.52, 0.20, 1.29, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.03, 0.18, 0.0
                .float 0.0

                .float 3.47, 0.20, 2.90, 0.0
                .float 0.2
                .word 0
                .float 0.22, 0.04, 0.21, 0.0
                .float 0.0

                .float 3.39, 0.20, 3.48, 0.0
                .float 0.2
                .word 1
                .float 0.77, 0.68, 0.87, 0.0
                .float 0.35

                .float 3.65, 0.20, 4.32, 0.0
                .float 0.2
                .word 0
                .float 0.07, 0.01, 0.12, 0.0
                .float 0.0

                .float 3.37, 0.20, 5.03, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 3.87, 0.20, 6.79, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.05, 0.20, 0.0
                .float 0.0

                .float 3.10, 0.20, 7.30, 0.0
                .float 0.2
                .word 0
                .float 0.16, 0.08, 0.19, 0.0
                .float 0.0

                .float 3.45, 0.20, 8.45, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.01, 0.11, 0.0
                .float 0.0

                .float 3.42, 0.20, 9.35, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.03, 0.14, 0.0
                .float 0.0

                .float 3.69, 0.20, 10.35, 0.0
                .float 0.2
                .word 0
                .float 0.06, 0.20, 0.16, 0.0
                .float 0.0

                .float 4.19, 0.20, -10.30, 0.0
                .float 0.2
                .word 0
                .float 0.25, 0.08, 0.18, 0.0
                .float 0.0

                .float 4.73, 0.20, -9.61, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.02, 0.10, 0.0
                .float 0.0

                .float 4.08, 0.20, -8.49, 0.0
                .float 0.2
                .word 1
                .float 0.83, 0.74, 0.96, 0.0
                .float 0.06

                .float 4.85, 0.20, -7.73, 0.0
                .float 0.2
                .word 0
                .float 0.03, 0.10, 0.22, 0.0
                .float 0.0

                .float 4.78, 0.20, -6.28, 0.0
                .float 0.2
                .word 0
                .float 0.03, 0.15, 0.04, 0.0
                .float 0.0

                .float 4.29, 0.20, -5.66, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.18, 0.09, 0.0
                .float 0.0

                .float 4.12, 0.20, -4.88, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.05, 0.20, 0.0
                .float 0.0

                .float 4.50, 0.20, -3.31, 0.0
                .float 0.2
                .word 0
                .float 0.06, 0.06, 0.15, 0.0
                .float 0.0

                .float 4.32, 0.20, -2.82, 0.0
                .float 0.2
                .word 1
                .float 0.84, 0.65, 0.66, 0.0
                .float 0.29

                .float 4.15, 0.20, -1.89, 0.0
                .float 0.2
                .word 0
                .float 0.07, 0.18, 0.05, 0.0
                .float 0.0

                .float 4.90, 0.20, -0.91, 0.0
                .float 0.2
                .word 1
                .float 0.61, 0.86, 0.50, 0.0
                .float 0.04

                .float 4.81, 0.20, 0.80, 0.0
                .float 0.2
                .word 1
                .float 0.67, 0.86, 0.54, 0.0
                .float 0.04

                .float 4.41, 0.20, 1.88, 0.0
                .float 0.2
                .word 0
                .float 0.06, 0.15, 0.01, 0.0
                .float 0.0

                .float 4.43, 0.20, 2.77, 0.0
                .float 0.2
                .word 1
                .float 0.91, 0.93, 0.56, 0.0
                .float 0.40

                .float 4.20, 0.20, 3.35, 0.0
                .float 0.2
                .word 0
                .float 0.17, 0.05, 0.01, 0.0
                .float 0.0

                .float 4.52, 0.20, 4.74, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.07, 0.25, 0.0
                .float 0.0

                .float 4.20, 0.20, 5.14, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.06, 0.10, 0.0
                .float 0.0

                .float 4.36, 0.20, 6.18, 0.0
                .float 0.2
                .word 0
                .float 0.16, 0.20, 0.16, 0.0
                .float 0.0

                .float 4.11, 0.20, 7.58, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.13, 0.17, 0.0
                .float 0.0

                .float 4.67, 0.20, 8.65, 0.0
                .float 0.2
                .word 0
                .float 0.05, 0.11, 0.07, 0.0
                .float 0.0

                .float 4.21, 0.20, 9.00, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.08, 0.10, 0.0
                .float 0.0

                .float 4.27, 0.20, 10.50, 0.0
                .float 0.2
                .word 0
                .float 0.16, 0.12, 0.19, 0.0
                .float 0.0

                .float 5.03, 0.20, -10.19, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 5.56, 0.20, -9.51, 0.0
                .float 0.2
                .word 0
                .float 0.06, 0.17, 0.10, 0.0
                .float 0.0

                .float 5.73, 0.20, -8.44, 0.0
                .float 0.2
                .word 1
                .float 0.75, 0.68, 0.82, 0.0
                .float 0.28

                .float 5.52, 0.20, -7.93, 0.0
                .float 0.2
                .word 1
                .float 0.91, 0.54, 0.97, 0.0
                .float 0.07

                .float 5.37, 0.20, -6.71, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.21, 0.02, 0.0
                .float 0.0

                .float 5.42, 0.20, -5.44, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.15, 0.18, 0.0
                .float 0.0

                .float 5.82, 0.20, -4.67, 0.0
                .float 0.2
                .word 1
                .float 0.79, 0.89, 0.88, 0.0
                .float 0.10

                .float 5.63, 0.20, -3.78, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.20, 0.04, 0.0
                .float 0.0

                .float 5.38, 0.20, -2.42, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 5.44, 0.20, -1.48, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.22, 0.13, 0.0
                .float 0.0

                .float 5.78, 0.20, -0.32, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.09, 0.17, 0.0
                .float 0.0

                .float 5.62, 0.20, 0.88, 0.0
                .float 0.2
                .word 0
                .float 0.15, 0.08, 0.08, 0.0
                .float 0.0

                .float 5.17, 0.20, 1.10, 0.0
                .float 0.2
                .word 0
                .float 0.10, 0.20, 0.08, 0.0
                .float 0.0

                .float 5.86, 0.20, 2.14, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.14, 0.20, 0.0
                .float 0.0

                .float 5.05, 0.20, 3.06, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.24, 0.07, 0.0
                .float 0.0

                .float 5.59, 0.20, 4.76, 0.0
                .float 0.2
                .word 0
                .float 0.06, 0.04, 0.10, 0.0
                .float 0.0

                .float 5.82, 0.20, 5.78, 0.0
                .float 0.2
                .word 0
                .float 0.07, 0.12, 0.18, 0.0
                .float 0.0

                .float 5.55, 0.20, 6.58, 0.0
                .float 0.2
                .word 1
                .float 0.85, 0.52, 0.82, 0.0
                .float 0.01

                .float 5.89, 0.20, 7.72, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.09, 0.24, 0.0
                .float 0.0

                .float 5.13, 0.20, 8.40, 0.0
                .float 0.2
                .word 0
                .float 0.07, 0.11, 0.15, 0.0
                .float 0.0

                .float 5.86, 0.20, 9.24, 0.0
                .float 0.2
                .word 0
                .float 0.05, 0.11, 0.00, 0.0
                .float 0.0

                .float 5.09, 0.20, 10.27, 0.0
                .float 0.2
                .word 0
                .float 0.10, 0.19, 0.02, 0.0
                .float 0.0

                .float 6.90, 0.20, -10.63, 0.0
                .float 0.2
                .word 1
                .float 0.84, 0.72, 0.78, 0.0
                .float 0.35

                .float 6.40, 0.20, -9.68, 0.0
                .float 0.2
                .word 1
                .float 0.77, 0.87, 0.91, 0.0
                .float 0.34

                .float 6.17, 0.20, -8.87, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 6.55, 0.20, -7.34, 0.0
                .float 0.2
                .word 1
                .float 0.94, 0.67, 0.55, 0.0
                .float 0.16

                .float 6.31, 0.20, -6.81, 0.0
                .float 0.2
                .word 0
                .float 0.18, 0.15, 0.09, 0.0
                .float 0.0

                .float 6.74, 0.20, -5.47, 0.0
                .float 0.2
                .word 0
                .float 0.19, 0.07, 0.06, 0.0
                .float 0.0

                .float 6.27, 0.20, -4.12, 0.0
                .float 0.2
                .word 0
                .float 0.17, 0.21, 0.05, 0.0
                .float 0.0

                .float 6.36, 0.20, -3.40, 0.0
                .float 0.2
                .word 1
                .float 0.79, 0.90, 0.92, 0.0
                .float 0.10

                .float 6.48, 0.20, -2.31, 0.0
                .float 0.2
                .word 0
                .float 0.22, 0.22, 0.09, 0.0
                .float 0.0

                .float 6.20, 0.20, -1.93, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 6.86, 0.20, -0.40, 0.0
                .float 0.2
                .word 0
                .float 0.19, 0.06, 0.04, 0.0
                .float 0.0

                .float 6.46, 0.20, 0.48, 0.0
                .float 0.2
                .word 0
                .float 0.20, 0.13, 0.01, 0.0
                .float 0.0

                .float 6.43, 0.20, 1.32, 0.0
                .float 0.2
                .word 0
                .float 0.22, 0.01, 0.03, 0.0
                .float 0.0

                .float 6.41, 0.20, 2.75, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 6.58, 0.20, 3.33, 0.0
                .float 0.2
                .word 0
                .float 0.18, 0.06, 0.15, 0.0
                .float 0.0

                .float 6.09, 0.20, 4.42, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.10, 0.09, 0.0
                .float 0.0

                .float 6.40, 0.20, 5.17, 0.0
                .float 0.2
                .word 0
                .float 0.15, 0.18, 0.03, 0.0
                .float 0.0

                .float 6.88, 0.20, 6.46, 0.0
                .float 0.2
                .word 0
                .float 0.01, 0.25, 0.25, 0.0
                .float 0.0

                .float 6.24, 0.20, 7.78, 0.0
                .float 0.2
                .word 0
                .float 0.10, 0.08, 0.21, 0.0
                .float 0.0

                .float 6.34, 0.20, 8.87, 0.0
                .float 0.2
                .word 0
                .float 0.03, 0.17, 0.11, 0.0
                .float 0.0

                .float 6.64, 0.20, 9.70, 0.0
                .float 0.2
                .word 1
                .float 0.70, 0.93, 0.67, 0.0
                .float 0.37

                .float 6.28, 0.20, 10.47, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.05, 0.12, 0.0
                .float 0.0

                .float 7.80, 0.20, -10.34, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.18, 0.03, 0.0
                .float 0.0

                .float 7.16, 0.20, -9.47, 0.0
                .float 0.2
                .word 0
                .float 0.15, 0.23, 0.24, 0.0
                .float 0.0

                .float 7.86, 0.20, -8.21, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.14, 0.16, 0.0
                .float 0.0

                .float 7.70, 0.20, -7.69, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.05, 0.22, 0.0
                .float 0.0

                .float 7.82, 0.20, -6.52, 0.0
                .float 0.2
                .word 0
                .float 0.06, 0.11, 0.16, 0.0
                .float 0.0

                .float 7.65, 0.20, -5.70, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.06, 0.02, 0.0
                .float 0.0

                .float 7.85, 0.20, -4.62, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.25, 0.15, 0.0
                .float 0.0

                .float 7.04, 0.20, -3.14, 0.0
                .float 0.2
                .word 0
                .float 0.06, 0.00, 0.01, 0.0
                .float 0.0

                .float 7.80, 0.20, -2.29, 0.0
                .float 0.2
                .word 0
                .float 0.11, 0.24, 0.15, 0.0
                .float 0.0

                .float 7.31, 0.20, -1.23, 0.0
                .float 0.2
                .word 0
                .float 0.19, 0.03, 0.14, 0.0
                .float 0.0

                .float 7.35, 0.20, -0.25, 0.0
                .float 0.2
                .word 1
                .float 0.88, 0.83, 0.56, 0.0
                .float 0.43

                .float 7.55, 0.20, 0.49, 0.0
                .float 0.2
                .word 0
                .float 0.17, 0.14, 0.03, 0.0
                .float 0.0

                .float 7.66, 0.20, 1.45, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.13, 0.16, 0.0
                .float 0.0

                .float 7.78, 0.20, 2.27, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.06, 0.15, 0.0
                .float 0.0

                .float 7.59, 0.20, 3.10, 0.0
                .float 0.2
                .word 0
                .float 0.10, 0.05, 0.07, 0.0
                .float 0.0

                .float 7.72, 0.20, 4.04, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.18, 0.08, 0.0
                .float 0.0

                .float 7.38, 0.20, 5.29, 0.0
                .float 0.2
                .word 1
                .float 0.98, 0.51, 0.70, 0.0
                .float 0.04

                .float 7.68, 0.20, 6.81, 0.0
                .float 0.2
                .word 0
                .float 0.18, 0.10, 0.08, 0.0
                .float 0.0

                .float 7.53, 0.20, 7.64, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.24, 0.24, 0.0
                .float 0.0

                .float 7.50, 0.20, 8.06, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.07, 0.00, 0.0
                .float 0.0

                .float 7.70, 0.20, 9.29, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.01, 0.13, 0.0
                .float 0.0

                .float 7.68, 0.20, 10.33, 0.0
                .float 0.2
                .word 0
                .float 0.18, 0.09, 0.19, 0.0
                .float 0.0

                .float 8.72, 0.20, -10.88, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.21, 0.02, 0.0
                .float 0.0

                .float 8.75, 0.20, -9.60, 0.0
                .float 0.2
                .word 0
                .float 0.05, 0.09, 0.18, 0.0
                .float 0.0

                .float 8.16, 0.20, -8.18, 0.0
                .float 0.2
                .word 0
                .float 0.22, 0.22, 0.02, 0.0
                .float 0.0

                .float 8.81, 0.20, -7.41, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.00, 0.11, 0.0
                .float 0.0

                .float 8.53, 0.20, -6.32, 0.0
                .float 0.2
                .word 1
                .float 0.97, 0.74, 0.59, 0.0
                .float 0.35

                .float 8.25, 0.20, -5.71, 0.0
                .float 0.2
                .word 0
                .float 0.19, 0.04, 0.11, 0.0
                .float 0.0

                .float 8.55, 0.20, -4.44, 0.0
                .float 0.2
                .word 0
                .float 0.20, 0.24, 0.23, 0.0
                .float 0.0

                .float 8.90, 0.20, -3.20, 0.0
                .float 0.2
                .word 0
                .float 0.22, 0.19, 0.20, 0.0
                .float 0.0

                .float 8.70, 0.20, -2.61, 0.0
                .float 0.2
                .word 0
                .float 0.22, 0.11, 0.16, 0.0
                .float 0.0

                .float 8.42, 0.20, -1.83, 0.0
                .float 0.2
                .word 0
                .float 0.10, 0.17, 0.16, 0.0
                .float 0.0

                .float 8.11, 0.20, -0.15, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 8.44, 0.20, 0.65, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.08, 0.19, 0.0
                .float 0.0

                .float 8.11, 0.20, 1.14, 0.0
                .float 0.2
                .word 0
                .float 0.01, 0.04, 0.16, 0.0
                .float 0.0

                .float 8.71, 0.20, 2.03, 0.0
                .float 0.2
                .word 0
                .float 0.15, 0.20, 0.21, 0.0
                .float 0.0

                .float 8.73, 0.20, 3.62, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.04, 0.11, 0.0
                .float 0.0

                .float 8.84, 0.20, 4.51, 0.0
                .float 0.2
                .word 0
                .float 0.15, 0.17, 0.02, 0.0
                .float 0.0

                .float 8.51, 0.20, 5.15, 0.0
                .float 0.2
                .word 0
                .float 0.18, 0.02, 0.03, 0.0
                .float 0.0

                .float 8.44, 0.20, 6.18, 0.0
                .float 0.2
                .word 0
                .float 0.06, 0.06, 0.11, 0.0
                .float 0.0

                .float 8.79, 0.20, 7.04, 0.0
                .float 0.2
                .word 0
                .float 0.07, 0.16, 0.07, 0.0
                .float 0.0

                .float 8.11, 0.20, 8.40, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 8.35, 0.20, 9.82, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.21, 0.17, 0.0
                .float 0.0

                .float 8.86, 0.20, 10.40, 0.0
                .float 0.2
                .word 0
                .float 0.00, 0.00, 0.13, 0.0
                .float 0.0

                .float 9.72, 0.20, -10.34, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.06, 0.20, 0.0
                .float 0.0

                .float 9.17, 0.20, -9.58, 0.0
                .float 0.2
                .word 0
                .float 0.15, 0.09, 0.03, 0.0
                .float 0.0

                .float 9.06, 0.20, -8.43, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.19, 0.05, 0.0
                .float 0.0

                .float 9.26, 0.20, -7.88, 0.0
                .float 0.2
                .word 0
                .float 0.10, 0.24, 0.24, 0.0
                .float 0.0

                .float 9.06, 0.20, -6.16, 0.0
                .float 0.2
                .word 0
                .float 0.11, 0.24, 0.10, 0.0
                .float 0.0

                .float 9.86, 0.20, -5.32, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.17, 0.09, 0.0
                .float 0.0

                .float 9.34, 0.20, -4.22, 0.0
                .float 0.2
                .word 1
                .float 0.72, 0.74, 0.59, 0.0
                .float 0.28

                .float 9.49, 0.20, -3.27, 0.0
                .float 0.2
                .word 0
                .float 0.22, 0.14, 0.12, 0.0
                .float 0.0

                .float 9.15, 0.20, -2.36, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.17, 0.14, 0.0
                .float 0.0

                .float 9.57, 0.20, -1.45, 0.0
                .float 0.2
                .word 1
                .float 0.53, 0.78, 0.68, 0.0
                .float 0.00

                .float 9.28, 0.20, -0.54, 0.0
                .float 0.2
                .word 0
                .float 0.25, 0.22, 0.24, 0.0
                .float 0.0

                .float 9.77, 0.20, 0.64, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.22, 0.24, 0.0
                .float 0.0

                .float 9.79, 0.20, 1.63, 0.0
                .float 0.2
                .word 0
                .float 0.19, 0.07, 0.18, 0.0
                .float 0.0

                .float 9.83, 0.20, 2.88, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.17, 0.21, 0.0
                .float 0.0

                .float 9.10, 0.20, 3.25, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.21, 0.04, 0.0
                .float 0.0

                .float 9.16, 0.20, 4.13, 0.0
                .float 0.2
                .word 0
                .float 0.19, 0.03, 0.13, 0.0
                .float 0.0

                .float 9.62, 0.20, 5.88, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.08, 0.03, 0.0
                .float 0.0

                .float 9.02, 0.20, 6.17, 0.0
                .float 0.2
                .word 1
                .float 0.63, 0.97, 0.56, 0.0
                .float 0.48

                .float 9.77, 0.20, 7.09, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.19, 0.03, 0.0
                .float 0.0

                .float 9.41, 0.20, 8.03, 0.0
                .float 0.2
                .word 1
                .float 0.82, 0.93, 0.53, 0.0
                .float 0.40

                .float 9.01, 0.20, 9.66, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.07, 0.06, 0.0
                .float 0.0

                .float 9.11, 0.20, 10.46, 0.0
                .float 0.2
                .word 0
                .float 0.11, 0.16, 0.09, 0.0
                .float 0.0

                .float 10.56, 0.20, -10.57, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.15, 0.14, 0.0
                .float 0.0

                .float 10.37, 0.20, -9.38, 0.0
                .float 0.2
                .word 1
                .float 0.88, 0.72, 0.98, 0.0
                .float 0.11

                .float 10.43, 0.20, -8.21, 0.0
                .float 0.2
                .word 1
                .float 0.67, 0.97, 0.83, 0.0
                .float 0.18

                .float 10.61, 0.20, -7.81, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.11, 0.15, 0.0
                .float 0.0

                .float 10.40, 0.20, -6.29, 0.0
                .float 0.2
                .word 0
                .float 0.02, 0.03, 0.17, 0.0
                .float 0.0

                .float 10.52, 0.20, -5.34, 0.0
                .float 0.2
                .word 0
                .float 0.04, 0.08, 0.16, 0.0
                .float 0.0

                .float 10.78, 0.20, -4.86, 0.0
                .float 0.2
                .word 0
                .float 0.08, 0.03, 0.16, 0.0
                .float 0.0

                .float 10.71, 0.20, -3.11, 0.0
                .float 0.2
                .word 0
                .float 0.03, 0.23, 0.03, 0.0
                .float 0.0

                .float 10.43, 0.20, -2.45, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.14, 0.20, 0.0
                .float 0.0

                .float 10.54, 0.20, -1.11, 0.0
                .float 0.2
                .word 0
                .float 0.16, 0.02, 0.18, 0.0
                .float 0.0

                .float 10.29, 0.20, -0.41, 0.0
                .float 0.2
                .word 0
                .float 0.14, 0.21, 0.19, 0.0
                .float 0.0

                .float 10.18, 0.20, 0.62, 0.0
                .float 0.2
                .word 1
                .float 0.80, 0.50, 0.52, 0.0
                .float 0.11

                .float 10.71, 0.20, 1.03, 0.0
                .float 0.2
                .word 0
                .float 0.23, 0.24, 0.21, 0.0
                .float 0.0

                .float 10.36, 0.20, 2.52, 0.0
                .float 0.2
                .word 0
                .float 0.09, 0.03, 0.25, 0.0
                .float 0.0

                .float 10.87, 0.20, 3.10, 0.0
                .float 0.2
                .word 0
                .float 0.15, 0.05, 0.08, 0.0
                .float 0.0

                .float 10.85, 0.20, 4.77, 0.0
                .float 0.2
                .word 0
                .float 0.12, 0.17, 0.14, 0.0
                .float 0.0

                .float 10.62, 0.20, 5.34, 0.0
                .float 0.2
                .word 0
                .float 0.07, 0.09, 0.13, 0.0
                .float 0.0

                .float 10.46, 0.20, 6.15, 0.0
                .float 0.2
                .word 0
                .float 0.05, 0.02, 0.13, 0.0
                .float 0.0

                .float 10.04, 0.20, 7.43, 0.0
                .float 0.2
                .word 0
                .float 0.06, 0.21, 0.06, 0.0
                .float 0.0

                .float 10.21, 0.20, 8.74, 0.0
                .float 0.2
                .word 0
                .float 0.21, 0.11, 0.13, 0.0
                .float 0.0

                .float 10.15, 0.20, 9.34, 0.0
                .float 0.2
                .word 0
                .float 0.24, 0.22, 0.02, 0.0
                .float 0.0

                .float 10.47, 0.20, 10.50, 0.0
                .float 0.2
                .word 0
                .float 0.00, 0.21, 0.21, 0.0
                .float 0.0
