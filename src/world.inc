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

                .float -10.327, 0.200, -10.354, 0.0
                .float 0.2
                .word 0
                .float 0.020, 0.291, 0.017, 0.0
                .float 0.0

                .float -10.745, 0.200, -9.155, 0.0
                .float 0.2
                .word 0
                .float 0.035, 0.670, 0.019, 0.0
                .float 0.0

                .float -10.638, 0.200, -8.382, 0.0
                .float 0.2
                .word 0
                .float 0.802, 0.335, 0.019, 0.0
                .float 0.0

                .float -10.851, 0.200, -7.608, 0.0
                .float 0.2
                .word 1
                .float 2.292, 0.865, 1.550, 0.0
                .float 0.034

                .float -10.797, 0.200, -6.101, 0.0
                .float 0.2
                .word 0
                .float 0.321, 0.735, 0.004, 0.0
                .float 0.0

                .float -10.299, 0.200, -5.575, 0.0
                .float 0.2
                .word 1
                .float 1.599, 2.403, 2.337, 0.0
                .float 0.475

                .float -10.426, 0.200, -4.671, 0.0
                .float 0.2
                .word 1
                .float 1.389, 0.906, 1.192, 0.0
                .float 0.246

                .float -10.461, 0.200, -3.540, 0.0
                .float 0.2
                .word 1
                .float 1.313, 1.315, 0.721, 0.0
                .float 0.466

                .float -10.572, 0.200, -2.697, 0.0
                .float 0.2
                .word 1
                .float 0.951, 2.479, 1.343, 0.0
                .float 0.005

                .float -10.166, 0.200, -1.233, 0.0
                .float 0.2
                .word 0
                .float 0.228, 0.229, 0.225, 0.0
                .float 0.0

                .float -10.814, 0.200, -0.178, 0.0
                .float 0.2
                .word 0
                .float 0.054, 0.191, 0.836, 0.0
                .float 0.0

                .float -10.992, 0.200, 0.699, 0.0
                .float 0.2
                .word 0
                .float 0.370, 0.287, 0.056, 0.0
                .float 0.0

                .float -10.894, 0.200, 1.192, 0.0
                .float 0.2
                .word 0
                .float 0.018, 0.077, 0.718, 0.0
                .float 0.0

                .float -10.960, 0.200, 2.091, 0.0
                .float 0.2
                .word 0
                .float 0.265, 0.002, 0.181, 0.0
                .float 0.0

                .float -10.616, 0.200, 3.861, 0.0
                .float 0.2
                .word 0
                .float 0.396, 0.016, 0.347, 0.0
                .float 0.0

                .float -10.890, 0.200, 4.247, 0.0
                .float 0.2
                .word 0
                .float 0.147, 0.017, 0.252, 0.0
                .float 0.0

                .float -10.484, 0.200, 5.601, 0.0
                .float 0.2
                .word 0
                .float 0.300, 0.236, 0.423, 0.0
                .float 0.0

                .float -10.475, 0.200, 6.553, 0.0
                .float 0.2
                .word 0
                .float 0.041, 0.034, 0.054, 0.0
                .float 0.0

                .float -10.783, 0.200, 7.228, 0.0
                .float 0.2
                .word 0
                .float 0.056, 0.218, 0.128, 0.0
                .float 0.0

                .float -10.438, 0.200, 8.718, 0.0
                .float 0.2
                .word 0
                .float 0.040, 0.158, 0.056, 0.0
                .float 0.0

                .float -10.217, 0.200, 9.306, 0.0
                .float 0.2
                .word 0
                .float 0.562, 0.209, 0.270, 0.0
                .float 0.0

                .float -10.134, 0.200, 10.108, 0.0
                .float 0.2
                .word 0
                .float 0.030, 0.003, 0.194, 0.0
                .float 0.0

                .float -9.673, 0.200, -10.289, 0.0
                .float 0.2
                .word 0
                .float 0.221, 0.209, 0.158, 0.0
                .float 0.0

                .float -9.474, 0.200, -9.134, 0.0
                .float 0.2
                .word 0
                .float 0.546, 0.130, 0.158, 0.0
                .float 0.0

                .float -9.498, 0.200, -8.776, 0.0
                .float 0.2
                .word 0
                .float 0.181, 0.230, 0.217, 0.0
                .float 0.0

                .float -9.447, 0.200, -7.209, 0.0
                .float 0.2
                .word 0
                .float 0.240, 0.005, 0.352, 0.0
                .float 0.0

                .float -9.950, 0.200, -7.000, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -9.679, 0.200, -5.474, 0.0
                .float 0.2
                .word 1
                .float 1.403, 0.981, 2.047, 0.0
                .float 0.443

                .float -9.514, 0.200, -4.806, 0.0
                .float 0.2
                .word 0
                .float 0.045, 0.478, 0.593, 0.0
                .float 0.0

                .float -9.492, 0.200, -3.128, 0.0
                .float 0.2
                .word 0
                .float 0.152, 0.152, 0.081, 0.0
                .float 0.0

                .float -9.728, 0.200, -2.222, 0.0
                .float 0.2
                .word 0
                .float 0.309, 0.242, 0.126, 0.0
                .float 0.0

                .float -9.850, 0.200, -1.379, 0.0
                .float 0.2
                .word 0
                .float 0.012, 0.080, 0.239, 0.0
                .float 0.0

                .float -9.283, 0.200, -0.747, 0.0
                .float 0.2
                .word 0
                .float 0.570, 0.110, 0.006, 0.0
                .float 0.0

                .float -9.858, 0.200, 0.179, 0.0
                .float 0.2
                .word 0
                .float 0.032, 0.076, 0.038, 0.0
                .float 0.0

                .float -9.314, 0.200, 1.516, 0.0
                .float 0.2
                .word 0
                .float 0.031, 0.017, 0.327, 0.0
                .float 0.0

                .float -9.673, 0.200, 2.079, 0.0
                .float 0.2
                .word 0
                .float 0.086, 0.010, 0.484, 0.0
                .float 0.0

                .float -9.204, 0.200, 3.766, 0.0
                .float 0.2
                .word 1
                .float 0.721, 0.517, 0.677, 0.0
                .float 0.213

                .float -9.936, 0.200, 4.530, 0.0
                .float 0.2
                .word 0
                .float 0.222, 0.167, 0.003, 0.0
                .float 0.0

                .float -9.731, 0.200, 5.686, 0.0
                .float 0.2
                .word 0
                .float 0.218, 0.559, 0.306, 0.0
                .float 0.0

                .float -9.231, 0.200, 6.475, 0.0
                .float 0.2
                .word 0
                .float 0.031, 0.089, 0.233, 0.0
                .float 0.0

                .float -9.679, 0.200, 7.851, 0.0
                .float 0.2
                .word 0
                .float 0.014, 0.359, 0.192, 0.0
                .float 0.0

                .float -9.967, 0.200, 8.693, 0.0
                .float 0.2
                .word 0
                .float 0.012, 0.080, 0.330, 0.0
                .float 0.0

                .float -9.784, 0.200, 9.199, 0.0
                .float 0.2
                .word 0
                .float 0.055, 0.187, 0.424, 0.0
                .float 0.0

                .float -9.485, 0.200, 10.615, 0.0
                .float 0.2
                .word 1
                .float 2.141, 0.581, 2.204, 0.0
                .float 0.079

                .float -8.259, 0.200, -10.217, 0.0
                .float 0.2
                .word 0
                .float 0.081, 0.113, 0.130, 0.0
                .float 0.0

                .float -8.617, 0.200, -9.800, 0.0
                .float 0.2
                .word 0
                .float 0.636, 0.123, 0.075, 0.0
                .float 0.0

                .float -8.203, 0.200, -8.115, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -8.913, 0.200, -7.621, 0.0
                .float 0.2
                .word 1
                .float 1.837, 0.710, 2.183, 0.0
                .float 0.245

                .float -8.869, 0.200, -6.376, 0.0
                .float 0.2
                .word 0
                .float 0.545, 0.131, 0.181, 0.0
                .float 0.0

                .float -8.616, 0.200, -5.912, 0.0
                .float 0.2
                .word 0
                .float 0.272, 0.049, 0.004, 0.0
                .float 0.0

                .float -8.146, 0.200, -4.180, 0.0
                .float 0.2
                .word 1
                .float 2.168, 2.290, 2.178, 0.0
                .float 0.465

                .float -8.716, 0.200, -3.304, 0.0
                .float 0.2
                .word 0
                .float 0.259, 0.050, 0.227, 0.0
                .float 0.0

                .float -8.518, 0.200, -2.216, 0.0
                .float 0.2
                .word 0
                .float 0.584, 0.093, 0.646, 0.0
                .float 0.0

                .float -8.106, 0.200, -1.790, 0.0
                .float 0.2
                .word 0
                .float 0.184, 0.403, 0.065, 0.0
                .float 0.0

                .float -8.500, 0.200, -0.960, 0.0
                .float 0.2
                .word 0
                .float 0.175, 0.004, 0.515, 0.0
                .float 0.0

                .float -8.843, 0.200, 0.313, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -8.181, 0.200, 1.795, 0.0
                .float 0.2
                .word 1
                .float 1.255, 1.695, 1.813, 0.0
                .float 0.018

                .float -8.335, 0.200, 2.513, 0.0
                .float 0.2
                .word 0
                .float 0.589, 0.258, 0.003, 0.0
                .float 0.0

                .float -8.796, 0.200, 3.173, 0.0
                .float 0.2
                .word 0
                .float 0.185, 0.208, 0.488, 0.0
                .float 0.0

                .float -8.681, 0.200, 4.340, 0.0
                .float 0.2
                .word 0
                .float 0.383, 0.195, 0.173, 0.0
                .float 0.0

                .float -8.266, 0.200, 5.186, 0.0
                .float 0.2
                .word 1
                .float 2.202, 2.391, 1.522, 0.0
                .float 0.297

                .float -8.390, 0.200, 6.284, 0.0
                .float 0.2
                .word 0
                .float 0.065, 0.071, 0.371, 0.0
                .float 0.0

                .float -8.827, 0.200, 7.707, 0.0
                .float 0.2
                .word 0
                .float 0.176, 0.216, 0.565, 0.0
                .float 0.0

                .float -8.692, 0.200, 8.438, 0.0
                .float 0.2
                .word 0
                .float 0.074, 0.280, 0.124, 0.0
                .float 0.0

                .float -8.598, 0.200, 9.223, 0.0
                .float 0.2
                .word 1
                .float 0.579, 2.350, 0.976, 0.0
                .float 0.072

                .float -8.903, 0.200, 10.536, 0.0
                .float 0.2
                .word 0
                .float 0.075, 0.704, 0.411, 0.0
                .float 0.0

                .float -7.848, 0.200, -10.718, 0.0
                .float 0.2
                .word 0
                .float 0.073, 0.147, 0.357, 0.0
                .float 0.0

                .float -7.905, 0.200, -9.410, 0.0
                .float 0.2
                .word 0
                .float 0.672, 0.077, 0.091, 0.0
                .float 0.0

                .float -7.832, 0.200, -8.883, 0.0
                .float 0.2
                .word 0
                .float 0.079, 0.179, 0.317, 0.0
                .float 0.0

                .float -7.421, 0.200, -7.584, 0.0
                .float 0.2
                .word 0
                .float 0.054, 0.527, 0.454, 0.0
                .float 0.0

                .float -7.781, 0.200, -6.154, 0.0
                .float 0.2
                .word 0
                .float 0.041, 0.943, 0.682, 0.0
                .float 0.0

                .float -7.543, 0.200, -5.195, 0.0
                .float 0.2
                .word 0
                .float 0.078, 0.157, 0.200, 0.0
                .float 0.0

                .float -7.183, 0.200, -4.945, 0.0
                .float 0.2
                .word 0
                .float 0.231, 0.477, 0.263, 0.0
                .float 0.0

                .float -7.690, 0.200, -3.476, 0.0
                .float 0.2
                .word 1
                .float 0.664, 2.150, 2.277, 0.0
                .float 0.190

                .float -7.365, 0.200, -2.159, 0.0
                .float 0.2
                .word 0
                .float 0.473, 0.050, 0.211, 0.0
                .float 0.0

                .float -7.863, 0.200, -1.408, 0.0
                .float 0.2
                .word 0
                .float 0.056, 0.068, 0.045, 0.0
                .float 0.0

                .float -7.982, 0.200, -0.247, 0.0
                .float 0.2
                .word 0
                .float 0.439, 0.017, 0.067, 0.0
                .float 0.0

                .float -7.886, 0.200, 0.031, 0.0
                .float 0.2
                .word 0
                .float 0.375, 0.123, 0.358, 0.0
                .float 0.0

                .float -7.919, 0.200, 1.570, 0.0
                .float 0.2
                .word 0
                .float 0.357, 0.004, 0.076, 0.0
                .float 0.0

                .float -7.850, 0.200, 2.235, 0.0
                .float 0.2
                .word 0
                .float 0.142, 0.056, 0.716, 0.0
                .float 0.0

                .float -7.173, 0.200, 3.024, 0.0
                .float 0.2
                .word 1
                .float 0.982, 0.806, 2.443, 0.0
                .float 0.226

                .float -7.406, 0.200, 4.640, 0.0
                .float 0.2
                .word 0
                .float 0.072, 0.251, 0.644, 0.0
                .float 0.0

                .float -7.959, 0.200, 5.506, 0.0
                .float 0.2
                .word 1
                .float 0.728, 0.764, 0.551, 0.0
                .float 0.140

                .float -7.646, 0.200, 6.262, 0.0
                .float 0.2
                .word 0
                .float 0.266, 0.217, 0.031, 0.0
                .float 0.0

                .float -7.384, 0.200, 7.055, 0.0
                .float 0.2
                .word 0
                .float 0.028, 0.469, 0.401, 0.0
                .float 0.0

                .float -7.100, 0.200, 8.798, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -7.468, 0.200, 9.597, 0.0
                .float 0.2
                .word 0
                .float 0.143, 0.516, 0.254, 0.0
                .float 0.0

                .float -7.971, 0.200, 10.675, 0.0
                .float 0.2
                .word 0
                .float 0.348, 0.058, 0.044, 0.0
                .float 0.0

                .float -6.643, 0.200, -10.308, 0.0
                .float 0.2
                .word 0
                .float 0.538, 0.510, 0.038, 0.0
                .float 0.0

                .float -6.668, 0.200, -9.906, 0.0
                .float 0.2
                .word 0
                .float 0.232, 0.116, 0.044, 0.0
                .float 0.0

                .float -6.267, 0.200, -8.924, 0.0
                .float 0.2
                .word 0
                .float 0.061, 0.127, 0.622, 0.0
                .float 0.0

                .float -6.165, 0.200, -7.927, 0.0
                .float 0.2
                .word 0
                .float 0.214, 0.016, 0.046, 0.0
                .float 0.0

                .float -6.418, 0.200, -6.827, 0.0
                .float 0.2
                .word 0
                .float 0.003, 0.084, 0.028, 0.0
                .float 0.0

                .float -6.857, 0.200, -5.980, 0.0
                .float 0.2
                .word 0
                .float 0.244, 0.351, 0.205, 0.0
                .float 0.0

                .float -6.980, 0.200, -4.197, 0.0
                .float 0.2
                .word 0
                .float 0.565, 0.255, 0.015, 0.0
                .float 0.0

                .float -6.138, 0.200, -3.730, 0.0
                .float 0.2
                .word 0
                .float 0.079, 0.192, 0.165, 0.0
                .float 0.0

                .float -6.416, 0.200, -2.818, 0.0
                .float 0.2
                .word 0
                .float 0.245, 0.004, 0.605, 0.0
                .float 0.0

                .float -6.556, 0.200, -1.609, 0.0
                .float 0.2
                .word 0
                .float 0.027, 0.102, 0.000, 0.0
                .float 0.0

                .float -6.874, 0.200, -0.474, 0.0
                .float 0.2
                .word 0
                .float 0.107, 0.354, 0.325, 0.0
                .float 0.0

                .float -6.792, 0.200, 0.846, 0.0
                .float 0.2
                .word 0
                .float 0.238, 0.318, 0.009, 0.0
                .float 0.0

                .float -6.493, 0.200, 1.281, 0.0
                .float 0.2
                .word 0
                .float 0.396, 0.094, 0.500, 0.0
                .float 0.0

                .float -6.132, 0.200, 2.383, 0.0
                .float 0.2
                .word 0
                .float 0.547, 0.074, 0.649, 0.0
                .float 0.0

                .float -6.270, 0.200, 3.343, 0.0
                .float 0.2
                .word 0
                .float 0.201, 0.333, 0.000, 0.0
                .float 0.0

                .float -6.575, 0.200, 4.440, 0.0
                .float 0.2
                .word 0
                .float 0.027, 0.112, 0.214, 0.0
                .float 0.0

                .float -6.720, 0.200, 5.293, 0.0
                .float 0.2
                .word 0
                .float 0.257, 0.418, 0.064, 0.0
                .float 0.0

                .float -6.172, 0.200, 6.445, 0.0
                .float 0.2
                .word 0
                .float 0.235, 0.097, 0.002, 0.0
                .float 0.0

                .float -6.402, 0.200, 7.391, 0.0
                .float 0.2
                .word 0
                .float 0.608, 0.481, 0.231, 0.0
                .float 0.0

                .float -6.522, 0.200, 8.541, 0.0
                .float 0.2
                .word 0
                .float 0.843, 0.079, 0.578, 0.0
                .float 0.0

                .float -6.221, 0.200, 9.371, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -6.898, 0.200, 10.299, 0.0
                .float 0.2
                .word 0
                .float 0.013, 0.402, 0.145, 0.0
                .float 0.0

                .float -5.532, 0.200, -10.987, 0.0
                .float 0.2
                .word 1
                .float 1.579, 1.870, 2.008, 0.0
                .float 0.024

                .float -5.433, 0.200, -9.852, 0.0
                .float 0.2
                .word 0
                .float 0.124, 0.061, 0.102, 0.0
                .float 0.0

                .float -5.759, 0.200, -8.569, 0.0
                .float 0.2
                .word 1
                .float 0.765, 2.282, 2.200, 0.0
                .float 0.123

                .float -5.800, 0.200, -7.709, 0.0
                .float 0.2
                .word 0
                .float 0.033, 0.599, 0.210, 0.0
                .float 0.0

                .float -5.380, 0.200, -6.673, 0.0
                .float 0.2
                .word 1
                .float 1.249, 0.734, 2.492, 0.0
                .float 0.002

                .float -5.746, 0.200, -5.454, 0.0
                .float 0.2
                .word 0
                .float 0.016, 0.183, 0.246, 0.0
                .float 0.0

                .float -5.815, 0.200, -4.688, 0.0
                .float 0.2
                .word 0
                .float 0.019, 0.287, 0.139, 0.0
                .float 0.0

                .float -5.420, 0.200, -3.441, 0.0
                .float 0.2
                .word 0
                .float 0.043, 0.005, 0.254, 0.0
                .float 0.0

                .float -5.655, 0.200, -2.445, 0.0
                .float 0.2
                .word 0
                .float 0.348, 0.062, 0.414, 0.0
                .float 0.0

                .float -5.276, 0.200, -1.394, 0.0
                .float 0.2
                .word 1
                .float 1.147, 2.258, 1.017, 0.0
                .float 0.487

                .float -5.122, 0.200, -0.591, 0.0
                .float 0.2
                .word 1
                .float 1.091, 2.448, 0.780, 0.0
                .float 0.470

                .float -5.465, 0.200, 0.266, 0.0
                .float 0.2
                .word 0
                .float 0.627, 0.062, 0.240, 0.0
                .float 0.0

                .float -5.238, 0.200, 1.786, 0.0
                .float 0.2
                .word 0
                .float 0.734, 0.409, 0.168, 0.0
                .float 0.0

                .float -5.672, 0.200, 2.301, 0.0
                .float 0.2
                .word 0
                .float 0.145, 0.153, 0.027, 0.0
                .float 0.0

                .float -5.536, 0.200, 3.019, 0.0
                .float 0.2
                .word 0
                .float 0.281, 0.002, 0.299, 0.0
                .float 0.0

                .float -5.115, 0.200, 4.520, 0.0
                .float 0.2
                .word 0
                .float 0.269, 0.069, 0.015, 0.0
                .float 0.0

                .float -5.761, 0.200, 5.774, 0.0
                .float 0.2
                .word 0
                .float 0.149, 0.325, 0.206, 0.0
                .float 0.0

                .float -5.928, 0.200, 6.619, 0.0
                .float 0.2
                .word 0
                .float 0.132, 0.181, 0.082, 0.0
                .float 0.0

                .float -5.677, 0.200, 7.337, 0.0
                .float 0.2
                .word 0
                .float 0.079, 0.022, 0.470, 0.0
                .float 0.0

                .float -5.504, 0.200, 8.599, 0.0
                .float 0.2
                .word 0
                .float 0.595, 0.075, 0.432, 0.0
                .float 0.0

                .float -5.104, 0.200, 9.881, 0.0
                .float 0.2
                .word 0
                .float 0.026, 0.813, 0.060, 0.0
                .float 0.0

                .float -5.613, 0.200, 10.055, 0.0
                .float 0.2
                .word 0
                .float 0.233, 0.003, 0.304, 0.0
                .float 0.0

                .float -4.930, 0.200, -10.921, 0.0
                .float 0.2
                .word 0
                .float 0.352, 0.026, 0.018, 0.0
                .float 0.0

                .float -4.375, 0.200, -9.616, 0.0
                .float 0.2
                .word 0
                .float 0.178, 0.394, 0.600, 0.0
                .float 0.0

                .float -4.553, 0.200, -8.298, 0.0
                .float 0.2
                .word 0
                .float 0.122, 0.152, 0.679, 0.0
                .float 0.0

                .float -4.600, 0.200, -7.286, 0.0
                .float 0.2
                .word 0
                .float 0.801, 0.239, 0.106, 0.0
                .float 0.0

                .float -4.529, 0.200, -6.447, 0.0
                .float 0.2
                .word 0
                .float 0.182, 0.239, 0.277, 0.0
                .float 0.0

                .float -4.198, 0.200, -5.689, 0.0
                .float 0.2
                .word 0
                .float 0.497, 0.017, 0.097, 0.0
                .float 0.0

                .float -4.584, 0.200, -4.324, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -4.686, 0.200, -3.824, 0.0
                .float 0.2
                .word 0
                .float 0.101, 0.321, 0.039, 0.0
                .float 0.0

                .float -4.333, 0.200, -2.976, 0.0
                .float 0.2
                .word 0
                .float 0.167, 0.001, 0.635, 0.0
                .float 0.0

                .float -4.455, 0.200, -1.319, 0.0
                .float 0.2
                .word 0
                .float 0.292, 0.792, 0.118, 0.0
                .float 0.0

                .float -4.922, 0.200, -0.277, 0.0
                .float 0.2
                .word 0
                .float 0.012, 0.253, 0.011, 0.0
                .float 0.0

                .float -4.530, 0.200, 0.465, 0.0
                .float 0.2
                .word 1
                .float 1.702, 1.015, 2.375, 0.0
                .float 0.147

                .float -4.524, 0.200, 1.498, 0.0
                .float 0.2
                .word 0
                .float 0.317, 0.010, 0.019, 0.0
                .float 0.0

                .float -4.816, 0.200, 2.470, 0.0
                .float 0.2
                .word 0
                .float 0.056, 0.057, 0.315, 0.0
                .float 0.0

                .float -4.792, 0.200, 3.737, 0.0
                .float 0.2
                .word 0
                .float 0.082, 0.107, 0.030, 0.0
                .float 0.0

                .float -4.802, 0.200, 4.558, 0.0
                .float 0.2
                .word 0
                .float 0.076, 0.466, 0.898, 0.0
                .float 0.0

                .float -4.245, 0.200, 5.239, 0.0
                .float 0.2
                .word 0
                .float 0.445, 0.675, 0.297, 0.0
                .float 0.0

                .float -4.684, 0.200, 6.617, 0.0
                .float 0.2
                .word 0
                .float 0.755, 0.024, 0.012, 0.0
                .float 0.0

                .float -4.315, 0.200, 7.570, 0.0
                .float 0.2
                .word 0
                .float 0.722, 0.753, 0.006, 0.0
                .float 0.0

                .float -4.603, 0.200, 8.160, 0.0
                .float 0.2
                .word 1
                .float 1.371, 0.535, 0.872, 0.0
                .float 0.303

                .float -4.132, 0.200, 9.591, 0.0
                .float 0.2
                .word 0
                .float 0.180, 0.248, 0.067, 0.0
                .float 0.0

                .float -4.897, 0.200, 10.714, 0.0
                .float 0.2
                .word 0
                .float 0.568, 0.002, 0.111, 0.0
                .float 0.0

                .float -3.720, 0.200, -10.736, 0.0
                .float 0.2
                .word 0
                .float 0.117, 0.085, 0.049, 0.0
                .float 0.0

                .float -3.951, 0.200, -9.229, 0.0
                .float 0.2
                .word 0
                .float 0.542, 0.863, 0.070, 0.0
                .float 0.0

                .float -3.270, 0.200, -8.954, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -3.201, 0.200, -7.851, 0.0
                .float 0.2
                .word 0
                .float 0.004, 0.005, 0.003, 0.0
                .float 0.0

                .float -3.766, 0.200, -6.419, 0.0
                .float 0.2
                .word 0
                .float 0.314, 0.500, 0.355, 0.0
                .float 0.0

                .float -3.481, 0.200, -5.553, 0.0
                .float 0.2
                .word 0
                .float 0.129, 0.346, 0.028, 0.0
                .float 0.0

                .float -3.269, 0.200, -4.166, 0.0
                .float 0.2
                .word 0
                .float 0.636, 0.249, 0.268, 0.0
                .float 0.0

                .float -3.899, 0.200, -3.256, 0.0
                .float 0.2
                .word 0
                .float 0.011, 0.131, 0.061, 0.0
                .float 0.0

                .float -3.651, 0.200, -2.113, 0.0
                .float 0.2
                .word 0
                .float 0.107, 0.060, 0.087, 0.0
                .float 0.0

                .float -3.703, 0.200, -1.907, 0.0
                .float 0.2
                .word 0
                .float 0.522, 0.232, 0.058, 0.0
                .float 0.0

                .float -3.711, 0.200, -0.784, 0.0
                .float 0.2
                .word 1
                .float 1.797, 1.203, 1.955, 0.0
                .float 0.155

                .float -3.574, 0.200, 0.733, 0.0
                .float 0.2
                .word 0
                .float 0.253, 0.214, 0.087, 0.0
                .float 0.0

                .float -3.572, 0.200, 1.747, 0.0
                .float 0.2
                .word 0
                .float 0.069, 0.408, 0.304, 0.0
                .float 0.0

                .float -3.796, 0.200, 2.208, 0.0
                .float 0.2
                .word 0
                .float 0.082, 0.130, 0.036, 0.0
                .float 0.0

                .float -3.948, 0.200, 3.467, 0.0
                .float 0.2
                .word 1
                .float 1.238, 2.483, 2.022, 0.0
                .float 0.494

                .float -3.200, 0.200, 4.038, 0.0
                .float 0.2
                .word 0
                .float 0.054, 0.041, 0.064, 0.0
                .float 0.0

                .float -3.122, 0.200, 5.317, 0.0
                .float 0.2
                .word 0
                .float 0.421, 0.037, 0.249, 0.0
                .float 0.0

                .float -3.148, 0.200, 6.742, 0.0
                .float 0.2
                .word 0
                .float 0.353, 0.337, 0.388, 0.0
                .float 0.0

                .float -3.296, 0.200, 7.451, 0.0
                .float 0.2
                .word 0
                .float 0.301, 0.287, 0.493, 0.0
                .float 0.0

                .float -3.486, 0.200, 8.192, 0.0
                .float 0.2
                .word 0
                .float 0.005, 0.039, 0.027, 0.0
                .float 0.0

                .float -3.864, 0.200, 9.610, 0.0
                .float 0.2
                .word 1
                .float 1.358, 1.748, 2.010, 0.0
                .float 0.012

                .float -3.118, 0.200, 10.672, 0.0
                .float 0.2
                .word 1
                .float 1.288, 1.013, 1.700, 0.0
                .float 0.088

                .float -2.318, 0.200, -10.890, 0.0
                .float 0.2
                .word 1
                .float 0.797, 1.873, 1.413, 0.0
                .float 0.356

                .float -2.495, 0.200, -9.975, 0.0
                .float 0.2
                .word 1
                .float 1.649, 0.613, 0.732, 0.0
                .float 0.470

                .float -2.852, 0.200, -8.158, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -2.716, 0.200, -7.448, 0.0
                .float 0.2
                .word 1
                .float 1.988, 0.976, 1.818, 0.0
                .float 0.384

                .float -2.804, 0.200, -6.635, 0.0
                .float 0.2
                .word 0
                .float 0.405, 0.163, 0.138, 0.0
                .float 0.0

                .float -2.338, 0.200, -5.488, 0.0
                .float 0.2
                .word 0
                .float 0.054, 0.127, 0.031, 0.0
                .float 0.0

                .float -2.750, 0.200, -4.708, 0.0
                .float 0.2
                .word 0
                .float 0.115, 0.049, 0.846, 0.0
                .float 0.0

                .float -2.549, 0.200, -3.899, 0.0
                .float 0.2
                .word 0
                .float 0.089, 0.028, 0.654, 0.0
                .float 0.0

                .float -2.925, 0.200, -2.343, 0.0
                .float 0.2
                .word 0
                .float 0.192, 0.293, 0.636, 0.0
                .float 0.0

                .float -2.996, 0.200, -1.209, 0.0
                .float 0.2
                .word 0
                .float 0.024, 0.123, 0.454, 0.0
                .float 0.0

                .float -2.720, 0.200, -0.681, 0.0
                .float 0.2
                .word 0
                .float 0.239, 0.676, 0.009, 0.0
                .float 0.0

                .float -2.155, 0.200, 0.000, 0.0
                .float 0.2
                .word 0
                .float 0.053, 0.559, 0.106, 0.0
                .float 0.0

                .float -2.611, 0.200, 1.833, 0.0
                .float 0.2
                .word 1
                .float 1.296, 2.360, 1.999, 0.0
                .float 0.286

                .float -2.923, 0.200, 2.815, 0.0
                .float 0.2
                .word 0
                .float 0.167, 0.534, 0.398, 0.0
                .float 0.0

                .float -2.170, 0.200, 3.641, 0.0
                .float 0.2
                .word 0
                .float 0.693, 0.219, 0.253, 0.0
                .float 0.0

                .float -2.639, 0.200, 4.828, 0.0
                .float 0.2
                .word 0
                .float 0.062, 0.153, 0.046, 0.0
                .float 0.0

                .float -2.118, 0.200, 5.245, 0.0
                .float 0.2
                .word 1
                .float 1.604, 1.214, 2.078, 0.0
                .float 0.312

                .float -2.380, 0.200, 6.263, 0.0
                .float 0.2
                .word 0
                .float 0.050, 0.234, 0.110, 0.0
                .float 0.0

                .float -2.925, 0.200, 7.627, 0.0
                .float 0.2
                .word 0
                .float 0.453, 0.180, 0.347, 0.0
                .float 0.0

                .float -2.640, 0.200, 8.783, 0.0
                .float 0.2
                .word 0
                .float 0.208, 0.157, 0.022, 0.0
                .float 0.0

                .float -2.538, 0.200, 9.757, 0.0
                .float 0.2
                .word 1
                .float 0.773, 1.560, 0.755, 0.0
                .float 0.295

                .float -2.224, 0.200, 10.249, 0.0
                .float 0.2
                .word 0
                .float 0.016, 0.127, 0.042, 0.0
                .float 0.0

                .float -1.954, 0.200, -10.669, 0.0
                .float 0.2
                .word 0
                .float 0.248, 0.374, 0.388, 0.0
                .float 0.0

                .float -1.385, 0.200, -9.187, 0.0
                .float 0.2
                .word 0
                .float 0.249, 0.121, 0.138, 0.0
                .float 0.0

                .float -1.736, 0.200, -8.318, 0.0
                .float 0.2
                .word 0
                .float 0.548, 0.004, 0.110, 0.0
                .float 0.0

                .float -1.974, 0.200, -7.156, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -1.929, 0.200, -6.111, 0.0
                .float 0.2
                .word 0
                .float 0.245, 0.065, 0.857, 0.0
                .float 0.0

                .float -1.154, 0.200, -5.393, 0.0
                .float 0.2
                .word 0
                .float 0.212, 0.067, 0.182, 0.0
                .float 0.0

                .float -1.962, 0.200, -4.308, 0.0
                .float 0.2
                .word 0
                .float 0.506, 0.598, 0.022, 0.0
                .float 0.0

                .float -1.159, 0.200, -3.934, 0.0
                .float 0.2
                .word 0
                .float 0.140, 0.115, 0.713, 0.0
                .float 0.0

                .float -1.601, 0.200, -2.661, 0.0
                .float 0.2
                .word 0
                .float 0.097, 0.028, 0.686, 0.0
                .float 0.0

                .float -1.794, 0.200, -1.625, 0.0
                .float 0.2
                .word 0
                .float 0.280, 0.709, 0.139, 0.0
                .float 0.0

                .float -1.538, 0.200, -0.983, 0.0
                .float 0.2
                .word 0
                .float 0.011, 0.320, 0.756, 0.0
                .float 0.0

                .float -1.215, 0.200, 0.128, 0.0
                .float 0.2
                .word 1
                .float 1.672, 1.670, 0.984, 0.0
                .float 0.146

                .float -1.197, 0.200, 1.503, 0.0
                .float 0.2
                .word 0
                .float 0.522, 0.073, 0.522, 0.0
                .float 0.0

                .float -1.274, 0.200, 2.373, 0.0
                .float 0.2
                .word 0
                .float 0.362, 0.006, 0.485, 0.0
                .float 0.0

                .float -1.925, 0.200, 3.559, 0.0
                .float 0.2
                .word 0
                .float 0.262, 0.124, 0.111, 0.0
                .float 0.0

                .float -1.110, 0.200, 4.198, 0.0
                .float 0.2
                .word 0
                .float 0.032, 0.928, 0.041, 0.0
                .float 0.0

                .float -1.708, 0.200, 5.248, 0.0
                .float 0.2
                .word 0
                .float 0.072, 0.319, 0.342, 0.0
                .float 0.0

                .float -1.598, 0.200, 6.641, 0.0
                .float 0.2
                .word 0
                .float 0.138, 0.506, 0.103, 0.0
                .float 0.0

                .float -1.169, 0.200, 7.656, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -1.912, 0.200, 8.645, 0.0
                .float 0.2
                .word 0
                .float 0.512, 0.138, 0.344, 0.0
                .float 0.0

                .float -1.998, 0.200, 9.247, 0.0
                .float 0.2
                .word 0
                .float 0.068, 0.257, 0.182, 0.0
                .float 0.0

                .float -1.199, 0.200, 10.856, 0.0
                .float 0.2
                .word 0
                .float 0.011, 0.793, 0.144, 0.0
                .float 0.0

                .float -0.794, 0.200, -10.403, 0.0
                .float 0.2
                .word 1
                .float 0.859, 2.022, 1.781, 0.0
                .float 0.175

                .float -0.752, 0.200, -9.426, 0.0
                .float 0.2
                .word 0
                .float 0.449, 0.762, 0.546, 0.0
                .float 0.0

                .float -0.786, 0.200, -8.995, 0.0
                .float 0.2
                .word 0
                .float 0.304, 0.346, 0.364, 0.0
                .float 0.0

                .float -0.482, 0.200, -7.472, 0.0
                .float 0.2
                .word 0
                .float 0.159, 0.611, 0.768, 0.0
                .float 0.0

                .float -0.193, 0.200, -6.324, 0.0
                .float 0.2
                .word 0
                .float 0.006, 0.048, 0.507, 0.0
                .float 0.0

                .float -0.212, 0.200, -5.501, 0.0
                .float 0.2
                .word 0
                .float 0.404, 0.440, 0.008, 0.0
                .float 0.0

                .float -0.480, 0.200, -4.216, 0.0
                .float 0.2
                .word 0
                .float 0.163, 0.002, 0.370, 0.0
                .float 0.0

                .float -0.213, 0.200, -3.414, 0.0
                .float 0.2
                .word 0
                .float 0.356, 0.009, 0.130, 0.0
                .float 0.0

                .float -0.892, 0.200, -2.394, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float -0.314, 0.200, -1.506, 0.0
                .float 0.2
                .word 0
                .float 0.015, 0.233, 0.633, 0.0
                .float 0.0

                .float -0.284, 0.200, -0.551, 0.0
                .float 0.2
                .word 0
                .float 0.240, 0.002, 0.833, 0.0
                .float 0.0

                .float -0.331, 0.200, 0.686, 0.0
                .float 0.2
                .word 0
                .float 0.053, 0.036, 0.446, 0.0
                .float 0.0

                .float -0.614, 0.200, 1.539, 0.0
                .float 0.2
                .word 0
                .float 0.138, 0.136, 0.132, 0.0
                .float 0.0

                .float -0.829, 0.200, 2.362, 0.0
                .float 0.2
                .word 0
                .float 0.173, 0.274, 0.235, 0.0
                .float 0.0

                .float -0.605, 0.200, 3.741, 0.0
                .float 0.2
                .word 0
                .float 0.214, 0.139, 0.387, 0.0
                .float 0.0

                .float -0.906, 0.200, 4.864, 0.0
                .float 0.2
                .word 0
                .float 0.014, 0.405, 0.767, 0.0
                .float 0.0

                .float -0.287, 0.200, 5.594, 0.0
                .float 0.2
                .word 0
                .float 0.002, 0.003, 0.161, 0.0
                .float 0.0

                .float -0.314, 0.200, 6.145, 0.0
                .float 0.2
                .word 0
                .float 0.154, 0.332, 0.084, 0.0
                .float 0.0

                .float -0.296, 0.200, 7.851, 0.0
                .float 0.2
                .word 0
                .float 0.017, 0.277, 0.011, 0.0
                .float 0.0

                .float -0.993, 0.200, 8.653, 0.0
                .float 0.2
                .word 1
                .float 0.507, 1.536, 1.619, 0.0
                .float 0.313

                .float -0.532, 0.200, 9.368, 0.0
                .float 0.2
                .word 0
                .float 0.088, 0.361, 0.168, 0.0
                .float 0.0

                .float -0.395, 0.200, 10.807, 0.0
                .float 0.2
                .word 0
                .float 0.271, 0.016, 0.782, 0.0
                .float 0.0

                .float 0.388, 0.200, -10.215, 0.0
                .float 0.2
                .word 0
                .float 0.772, 0.670, 0.495, 0.0
                .float 0.0

                .float 0.735, 0.200, -9.818, 0.0
                .float 0.2
                .word 0
                .float 0.319, 0.063, 0.310, 0.0
                .float 0.0

                .float 0.865, 0.200, -8.289, 0.0
                .float 0.2
                .word 0
                .float 0.244, 0.012, 0.690, 0.0
                .float 0.0

                .float 0.710, 0.200, -7.222, 0.0
                .float 0.2
                .word 0
                .float 0.220, 0.256, 0.056, 0.0
                .float 0.0

                .float 0.233, 0.200, -6.176, 0.0
                .float 0.2
                .word 0
                .float 0.719, 0.114, 0.027, 0.0
                .float 0.0

                .float 0.860, 0.200, -5.760, 0.0
                .float 0.2
                .word 0
                .float 0.178, 0.289, 0.590, 0.0
                .float 0.0

                .float 0.833, 0.200, -4.665, 0.0
                .float 0.2
                .word 0
                .float 0.132, 0.223, 0.644, 0.0
                .float 0.0

                .float 0.110, 0.200, -3.696, 0.0
                .float 0.2
                .word 1
                .float 1.835, 1.692, 1.962, 0.0
                .float 0.449

                .float 0.520, 0.200, -2.582, 0.0
                .float 0.2
                .word 0
                .float 0.538, 0.386, 0.011, 0.0
                .float 0.0

                .float 0.522, 0.200, -1.880, 0.0
                .float 0.2
                .word 0
                .float 0.432, 0.046, 0.174, 0.0
                .float 0.0

                .float 0.208, 0.200, -0.620, 0.0
                .float 0.2
                .word 0
                .float 0.249, 0.707, 0.405, 0.0
                .float 0.0

                .float 0.500, 0.200, 0.233, 0.0
                .float 0.2
                .word 0
                .float 0.379, 0.631, 0.302, 0.0
                .float 0.0

                .float 0.240, 0.200, 1.427, 0.0
                .float 0.2
                .word 0
                .float 0.015, 0.296, 0.203, 0.0
                .float 0.0

                .float 0.651, 0.200, 2.856, 0.0
                .float 0.2
                .word 0
                .float 0.071, 0.028, 0.364, 0.0
                .float 0.0

                .float 0.239, 0.200, 3.752, 0.0
                .float 0.2
                .word 0
                .float 0.343, 0.067, 0.119, 0.0
                .float 0.0

                .float 0.024, 0.200, 4.564, 0.0
                .float 0.2
                .word 1
                .float 1.444, 2.286, 1.086, 0.0
                .float 0.412

                .float 0.155, 0.200, 5.313, 0.0
                .float 0.2
                .word 0
                .float 0.695, 0.346, 0.269, 0.0
                .float 0.0

                .float 0.804, 0.200, 6.019, 0.0
                .float 0.2
                .word 0
                .float 0.352, 0.480, 0.651, 0.0
                .float 0.0

                .float 0.456, 0.200, 7.176, 0.0
                .float 0.2
                .word 0
                .float 0.029, 0.191, 0.048, 0.0
                .float 0.0

                .float 0.202, 0.200, 8.504, 0.0
                .float 0.2
                .word 0
                .float 0.035, 0.254, 0.309, 0.0
                .float 0.0

                .float 0.036, 0.200, 9.018, 0.0
                .float 0.2
                .word 0
                .float 0.329, 0.340, 0.118, 0.0
                .float 0.0

                .float 0.453, 0.200, 10.816, 0.0
                .float 0.2
                .word 0
                .float 0.129, 0.182, 0.065, 0.0
                .float 0.0

                .float 1.612, 0.200, -10.198, 0.0
                .float 0.2
                .word 0
                .float 0.087, 0.082, 0.070, 0.0
                .float 0.0

                .float 1.747, 0.200, -9.532, 0.0
                .float 0.2
                .word 1
                .float 1.360, 1.620, 2.422, 0.0
                .float 0.434

                .float 1.828, 0.200, -8.213, 0.0
                .float 0.2
                .word 0
                .float 0.100, 0.124, 0.057, 0.0
                .float 0.0

                .float 1.429, 0.200, -7.577, 0.0
                .float 0.2
                .word 0
                .float 0.550, 0.514, 0.009, 0.0
                .float 0.0

                .float 1.302, 0.200, -6.446, 0.0
                .float 0.2
                .word 0
                .float 0.353, 0.039, 0.023, 0.0
                .float 0.0

                .float 1.641, 0.200, -5.227, 0.0
                .float 0.2
                .word 0
                .float 0.453, 0.831, 0.029, 0.0
                .float 0.0

                .float 1.599, 0.200, -4.456, 0.0
                .float 0.2
                .word 0
                .float 0.052, 0.041, 0.198, 0.0
                .float 0.0

                .float 1.857, 0.200, -3.491, 0.0
                .float 0.2
                .word 0
                .float 0.873, 0.216, 0.034, 0.0
                .float 0.0

                .float 1.736, 0.200, -2.428, 0.0
                .float 0.2
                .word 0
                .float 0.312, 0.239, 0.033, 0.0
                .float 0.0

                .float 1.765, 0.200, -1.245, 0.0
                .float 0.2
                .word 0
                .float 0.461, 0.003, 0.025, 0.0
                .float 0.0

                .float 1.567, 0.200, -0.797, 0.0
                .float 0.2
                .word 0
                .float 0.148, 0.378, 0.089, 0.0
                .float 0.0

                .float 1.767, 0.200, 0.744, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 1.854, 0.200, 1.580, 0.0
                .float 0.2
                .word 0
                .float 0.187, 0.569, 0.416, 0.0
                .float 0.0

                .float 1.574, 0.200, 2.293, 0.0
                .float 0.2
                .word 0
                .float 0.027, 0.042, 0.104, 0.0
                .float 0.0

                .float 1.318, 0.200, 3.817, 0.0
                .float 0.2
                .word 0
                .float 0.367, 0.160, 0.253, 0.0
                .float 0.0

                .float 1.733, 0.200, 4.113, 0.0
                .float 0.2
                .word 0
                .float 0.058, 0.148, 0.394, 0.0
                .float 0.0

                .float 1.287, 0.200, 5.020, 0.0
                .float 0.2
                .word 0
                .float 0.128, 0.670, 0.757, 0.0
                .float 0.0

                .float 1.111, 0.200, 6.870, 0.0
                .float 0.2
                .word 0
                .float 0.159, 0.016, 0.738, 0.0
                .float 0.0

                .float 1.787, 0.200, 7.020, 0.0
                .float 0.2
                .word 0
                .float 0.667, 0.167, 0.231, 0.0
                .float 0.0

                .float 1.851, 0.200, 8.887, 0.0
                .float 0.2
                .word 0
                .float 0.269, 0.242, 0.239, 0.0
                .float 0.0

                .float 1.030, 0.200, 9.365, 0.0
                .float 0.2
                .word 0
                .float 0.007, 0.059, 0.014, 0.0
                .float 0.0

                .float 1.391, 0.200, 10.110, 0.0
                .float 0.2
                .word 0
                .float 0.338, 0.195, 0.169, 0.0
                .float 0.0

                .float 2.738, 0.200, -10.690, 0.0
                .float 0.2
                .word 1
                .float 0.896, 1.079, 2.122, 0.0
                .float 0.498

                .float 2.155, 0.200, -9.896, 0.0
                .float 0.2
                .word 1
                .float 1.434, 1.730, 1.093, 0.0
                .float 0.250

                .float 2.019, 0.200, -8.506, 0.0
                .float 0.2
                .word 0
                .float 0.422, 0.450, 0.067, 0.0
                .float 0.0

                .float 2.628, 0.200, -7.404, 0.0
                .float 0.2
                .word 0
                .float 0.027, 0.036, 0.225, 0.0
                .float 0.0

                .float 2.749, 0.200, -6.931, 0.0
                .float 0.2
                .word 0
                .float 0.108, 0.026, 0.003, 0.0
                .float 0.0

                .float 2.685, 0.200, -5.444, 0.0
                .float 0.2
                .word 0
                .float 0.167, 0.582, 0.097, 0.0
                .float 0.0

                .float 2.503, 0.200, -4.313, 0.0
                .float 0.2
                .word 1
                .float 2.053, 1.421, 1.474, 0.0
                .float 0.167

                .float 2.139, 0.200, -3.527, 0.0
                .float 0.2
                .word 0
                .float 0.499, 0.143, 0.335, 0.0
                .float 0.0

                .float 2.537, 0.200, -2.334, 0.0
                .float 0.2
                .word 0
                .float 0.662, 0.252, 0.212, 0.0
                .float 0.0

                .float 2.823, 0.200, -1.101, 0.0
                .float 0.2
                .word 0
                .float 0.129, 0.213, 0.649, 0.0
                .float 0.0

                .float 2.022, 0.200, -0.630, 0.0
                .float 0.2
                .word 0
                .float 0.202, 0.533, 0.098, 0.0
                .float 0.0

                .float 2.060, 0.200, 0.614, 0.0
                .float 0.2
                .word 0
                .float 0.128, 0.062, 0.138, 0.0
                .float 0.0

                .float 2.295, 0.200, 1.741, 0.0
                .float 0.2
                .word 0
                .float 0.675, 0.043, 0.152, 0.0
                .float 0.0

                .float 2.101, 0.200, 2.608, 0.0
                .float 0.2
                .word 0
                .float 0.557, 0.694, 0.016, 0.0
                .float 0.0

                .float 2.596, 0.200, 3.741, 0.0
                .float 0.2
                .word 0
                .float 0.120, 0.080, 0.158, 0.0
                .float 0.0

                .float 2.475, 0.200, 4.260, 0.0
                .float 0.2
                .word 0
                .float 0.208, 0.226, 0.097, 0.0
                .float 0.0

                .float 2.610, 0.200, 5.708, 0.0
                .float 0.2
                .word 0
                .float 0.031, 0.097, 0.683, 0.0
                .float 0.0

                .float 2.054, 0.200, 6.594, 0.0
                .float 0.2
                .word 0
                .float 0.110, 0.722, 0.345, 0.0
                .float 0.0

                .float 2.005, 0.200, 7.826, 0.0
                .float 0.2
                .word 0
                .float 0.204, 0.032, 0.008, 0.0
                .float 0.0

                .float 2.473, 0.200, 8.262, 0.0
                .float 0.2
                .word 0
                .float 0.686, 0.104, 0.001, 0.0
                .float 0.0

                .float 2.541, 0.200, 9.310, 0.0
                .float 0.2
                .word 1
                .float 1.671, 1.309, 1.662, 0.0
                .float 0.314

                .float 2.673, 0.200, 10.812, 0.0
                .float 0.2
                .word 0
                .float 0.209, 0.147, 0.098, 0.0
                .float 0.0

                .float 3.041, 0.200, -10.349, 0.0
                .float 0.2
                .word 0
                .float 0.064, 0.493, 0.239, 0.0
                .float 0.0

                .float 3.323, 0.200, -9.310, 0.0
                .float 0.2
                .word 0
                .float 0.520, 0.237, 0.088, 0.0
                .float 0.0

                .float 3.777, 0.200, -8.533, 0.0
                .float 0.2
                .word 0
                .float 0.131, 0.256, 0.524, 0.0
                .float 0.0

                .float 3.212, 0.200, -7.609, 0.0
                .float 0.2
                .word 1
                .float 1.678, 1.460, 1.741, 0.0
                .float 0.168

                .float 3.545, 0.200, -6.885, 0.0
                .float 0.2
                .word 0
                .float 0.238, 0.241, 0.013, 0.0
                .float 0.0

                .float 3.264, 0.200, -5.585, 0.0
                .float 0.2
                .word 1
                .float 1.641, 1.650, 1.797, 0.0
                .float 0.217

                .float 3.084, 0.200, -4.995, 0.0
                .float 0.2
                .word 1
                .float 1.219, 1.029, 2.323, 0.0
                .float 0.103

                .float 3.795, 0.200, -3.868, 0.0
                .float 0.2
                .word 0
                .float 0.573, 0.049, 0.052, 0.0
                .float 0.0

                .float 3.475, 0.200, -2.853, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 3.408, 0.200, -1.500, 0.0
                .float 0.2
                .word 0
                .float 0.083, 0.542, 0.207, 0.0
                .float 0.0

                .float 3.163, 0.200, -0.914, 0.0
                .float 0.2
                .word 1
                .float 1.048, 0.701, 2.148, 0.0
                .float 0.317

                .float 3.328, 0.200, 0.662, 0.0
                .float 0.2
                .word 1
                .float 0.996, 2.264, 1.463, 0.0
                .float 0.014

                .float 3.556, 0.200, 1.543, 0.0
                .float 0.2
                .word 0
                .float 0.228, 0.814, 0.129, 0.0
                .float 0.0

                .float 3.366, 0.200, 2.824, 0.0
                .float 0.2
                .word 0
                .float 0.794, 0.068, 0.093, 0.0
                .float 0.0

                .float 3.471, 0.200, 3.155, 0.0
                .float 0.2
                .word 0
                .float 0.622, 0.245, 0.064, 0.0
                .float 0.0

                .float 3.213, 0.200, 4.553, 0.0
                .float 0.2
                .word 0
                .float 0.061, 0.120, 0.463, 0.0
                .float 0.0

                .float 3.583, 0.200, 5.695, 0.0
                .float 0.2
                .word 1
                .float 0.612, 0.858, 1.969, 0.0
                .float 0.305

                .float 3.144, 0.200, 6.490, 0.0
                .float 0.2
                .word 0
                .float 0.481, 0.012, 0.716, 0.0
                .float 0.0

                .float 3.662, 0.200, 7.889, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 3.651, 0.200, 8.648, 0.0
                .float 0.2
                .word 0
                .float 0.320, 0.141, 0.452, 0.0
                .float 0.0

                .float 3.826, 0.200, 9.436, 0.0
                .float 0.2
                .word 0
                .float 0.145, 0.076, 0.373, 0.0
                .float 0.0

                .float 3.207, 0.200, 10.536, 0.0
                .float 0.2
                .word 0
                .float 0.183, 0.023, 0.062, 0.0
                .float 0.0

                .float 4.746, 0.200, -10.973, 0.0
                .float 0.2
                .word 0
                .float 0.602, 0.785, 0.179, 0.0
                .float 0.0

                .float 4.435, 0.200, -9.154, 0.0
                .float 0.2
                .word 1
                .float 1.067, 2.215, 1.100, 0.0
                .float 0.293

                .float 4.381, 0.200, -8.499, 0.0
                .float 0.2
                .word 0
                .float 0.044, 0.155, 0.567, 0.0
                .float 0.0

                .float 4.246, 0.200, -7.306, 0.0
                .float 0.2
                .word 0
                .float 0.025, 0.083, 0.056, 0.0
                .float 0.0

                .float 4.008, 0.200, -6.236, 0.0
                .float 0.2
                .word 0
                .float 0.487, 0.265, 0.288, 0.0
                .float 0.0

                .float 4.569, 0.200, -5.676, 0.0
                .float 0.2
                .word 1
                .float 0.939, 2.065, 1.361, 0.0
                .float 0.464

                .float 4.744, 0.200, -4.620, 0.0
                .float 0.2
                .word 0
                .float 0.001, 0.172, 0.502, 0.0
                .float 0.0

                .float 4.681, 0.200, -3.238, 0.0
                .float 0.2
                .word 0
                .float 0.910, 0.612, 0.107, 0.0
                .float 0.0

                .float 4.756, 0.200, -2.682, 0.0
                .float 0.2
                .word 1
                .float 0.878, 2.211, 1.438, 0.0
                .float 0.411

                .float 4.193, 0.200, -1.691, 0.0
                .float 0.2
                .word 0
                .float 0.772, 0.800, 0.091, 0.0
                .float 0.0

                .float 4.834, 0.200, -0.814, 0.0
                .float 0.2
                .word 1
                .float 1.106, 2.476, 1.626, 0.0
                .float 0.030

                .float 4.751, 0.200, 0.539, 0.0
                .float 0.2
                .word 0
                .float 0.176, 0.000, 0.305, 0.0
                .float 0.0

                .float 4.828, 0.200, 1.232, 0.0
                .float 0.2
                .word 0
                .float 0.563, 0.843, 0.062, 0.0
                .float 0.0

                .float 4.889, 0.200, 2.758, 0.0
                .float 0.2
                .word 1
                .float 2.125, 0.578, 1.151, 0.0
                .float 0.370

                .float 4.221, 0.200, 3.222, 0.0
                .float 0.2
                .word 0
                .float 0.189, 0.007, 0.052, 0.0
                .float 0.0

                .float 4.760, 0.200, 4.572, 0.0
                .float 0.2
                .word 0
                .float 0.411, 0.322, 0.255, 0.0
                .float 0.0

                .float 4.097, 0.200, 5.883, 0.0
                .float 0.2
                .word 1
                .float 0.696, 0.601, 1.987, 0.0
                .float 0.043

                .float 4.804, 0.200, 6.546, 0.0
                .float 0.2
                .word 1
                .float 2.365, 2.363, 1.776, 0.0
                .float 0.089

                .float 4.160, 0.200, 7.613, 0.0
                .float 0.2
                .word 0
                .float 0.773, 0.190, 0.296, 0.0
                .float 0.0

                .float 4.028, 0.200, 8.035, 0.0
                .float 0.2
                .word 0
                .float 0.000, 0.020, 0.001, 0.0
                .float 0.0

                .float 4.239, 0.200, 9.770, 0.0
                .float 0.2
                .word 0
                .float 0.190, 0.076, 0.053, 0.0
                .float 0.0

                .float 4.128, 0.200, 10.123, 0.0
                .float 0.2
                .word 1
                .float 1.141, 1.130, 1.657, 0.0
                .float 0.366

                .float 5.272, 0.200, -10.675, 0.0
                .float 0.2
                .word 0
                .float 0.190, 0.393, 0.086, 0.0
                .float 0.0

                .float 5.683, 0.200, -9.714, 0.0
                .float 0.2
                .word 0
                .float 0.014, 0.162, 0.143, 0.0
                .float 0.0

                .float 5.563, 0.200, -8.299, 0.0
                .float 0.2
                .word 0
                .float 0.822, 0.408, 0.038, 0.0
                .float 0.0

                .float 5.267, 0.200, -7.607, 0.0
                .float 0.2
                .word 1
                .float 0.559, 1.977, 1.009, 0.0
                .float 0.121

                .float 5.393, 0.200, -6.527, 0.0
                .float 0.2
                .word 0
                .float 0.139, 0.053, 0.062, 0.0
                .float 0.0

                .float 5.872, 0.200, -5.571, 0.0
                .float 0.2
                .word 1
                .float 1.056, 1.812, 1.947, 0.0
                .float 0.452

                .float 5.391, 0.200, -4.206, 0.0
                .float 0.2
                .word 0
                .float 0.125, 0.386, 0.008, 0.0
                .float 0.0

                .float 5.878, 0.200, -3.542, 0.0
                .float 0.2
                .word 0
                .float 0.545, 0.043, 0.019, 0.0
                .float 0.0

                .float 5.286, 0.200, -2.887, 0.0
                .float 0.2
                .word 0
                .float 0.068, 0.112, 0.343, 0.0
                .float 0.0

                .float 5.442, 0.200, -1.629, 0.0
                .float 0.2
                .word 0
                .float 0.334, 0.008, 0.095, 0.0
                .float 0.0

                .float 5.764, 0.200, -0.276, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 5.776, 0.200, 0.702, 0.0
                .float 0.2
                .word 0
                .float 0.447, 0.047, 0.346, 0.0
                .float 0.0

                .float 5.230, 0.200, 1.867, 0.0
                .float 0.2
                .word 0
                .float 0.079, 0.854, 0.292, 0.0
                .float 0.0

                .float 5.325, 0.200, 2.819, 0.0
                .float 0.2
                .word 0
                .float 0.164, 0.570, 0.097, 0.0
                .float 0.0

                .float 5.859, 0.200, 3.259, 0.0
                .float 0.2
                .word 0
                .float 0.139, 0.331, 0.016, 0.0
                .float 0.0

                .float 5.592, 0.200, 4.219, 0.0
                .float 0.2
                .word 1
                .float 0.886, 1.498, 2.317, 0.0
                .float 0.427

                .float 5.791, 0.200, 5.104, 0.0
                .float 0.2
                .word 0
                .float 0.421, 0.073, 0.268, 0.0
                .float 0.0

                .float 5.617, 0.200, 6.675, 0.0
                .float 0.2
                .word 0
                .float 0.053, 0.184, 0.383, 0.0
                .float 0.0

                .float 5.148, 0.200, 7.563, 0.0
                .float 0.2
                .word 0
                .float 0.392, 0.212, 0.789, 0.0
                .float 0.0

                .float 5.384, 0.200, 8.380, 0.0
                .float 0.2
                .word 0
                .float 0.085, 0.067, 0.037, 0.0
                .float 0.0

                .float 5.512, 0.200, 9.212, 0.0
                .float 0.2
                .word 1
                .float 0.842, 2.342, 1.718, 0.0
                .float 0.364

                .float 5.182, 0.200, 10.718, 0.0
                .float 0.2
                .word 0
                .float 0.120, 0.189, 0.831, 0.0
                .float 0.0

                .float 6.161, 0.200, -10.478, 0.0
                .float 0.2
                .word 1
                .float 1.326, 1.507, 1.876, 0.0
                .float 0.420

                .float 6.833, 0.200, -9.594, 0.0
                .float 0.2
                .word 0
                .float 0.075, 0.062, 0.570, 0.0
                .float 0.0

                .float 6.496, 0.200, -8.458, 0.0
                .float 0.2
                .word 1
                .float 1.444, 0.923, 1.833, 0.0
                .float 0.337

                .float 6.008, 0.200, -7.843, 0.0
                .float 0.2
                .word 0
                .float 0.138, 0.132, 0.367, 0.0
                .float 0.0

                .float 6.688, 0.200, -6.781, 0.0
                .float 0.2
                .word 0
                .float 0.250, 0.029, 0.103, 0.0
                .float 0.0

                .float 6.379, 0.200, -5.359, 0.0
                .float 0.2
                .word 0
                .float 0.336, 0.067, 0.010, 0.0
                .float 0.0

                .float 6.685, 0.200, -4.758, 0.0
                .float 0.2
                .word 1
                .float 1.371, 1.057, 0.522, 0.0
                .float 0.274

                .float 6.506, 0.200, -3.551, 0.0
                .float 0.2
                .word 0
                .float 0.679, 0.082, 0.071, 0.0
                .float 0.0

                .float 6.702, 0.200, -2.925, 0.0
                .float 0.2
                .word 0
                .float 0.454, 0.350, 0.062, 0.0
                .float 0.0

                .float 6.120, 0.200, -1.430, 0.0
                .float 0.2
                .word 0
                .float 0.292, 0.138, 0.565, 0.0
                .float 0.0

                .float 6.557, 0.200, -0.785, 0.0
                .float 0.2
                .word 0
                .float 0.134, 0.042, 0.004, 0.0
                .float 0.0

                .float 6.532, 0.200, 0.054, 0.0
                .float 0.2
                .word 0
                .float 0.050, 0.163, 0.576, 0.0
                .float 0.0

                .float 6.505, 0.200, 1.190, 0.0
                .float 0.2
                .word 1
                .float 2.322, 1.189, 1.536, 0.0
                .float 0.247

                .float 6.690, 0.200, 2.189, 0.0
                .float 0.2
                .word 0
                .float 0.161, 0.474, 0.177, 0.0
                .float 0.0

                .float 6.661, 0.200, 3.189, 0.0
                .float 0.2
                .word 0
                .float 0.126, 0.408, 0.571, 0.0
                .float 0.0

                .float 6.735, 0.200, 4.593, 0.0
                .float 0.2
                .word 1
                .float 1.485, 1.447, 1.792, 0.0
                .float 0.027

                .float 6.616, 0.200, 5.478, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 6.026, 0.200, 6.044, 0.0
                .float 0.2
                .word 0
                .float 0.206, 0.524, 0.230, 0.0
                .float 0.0

                .float 6.281, 0.200, 7.754, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 6.043, 0.200, 8.043, 0.0
                .float 0.2
                .word 0
                .float 0.172, 0.040, 0.461, 0.0
                .float 0.0

                .float 6.708, 0.200, 9.255, 0.0
                .float 0.2
                .word 0
                .float 0.211, 0.108, 0.377, 0.0
                .float 0.0

                .float 6.267, 0.200, 10.423, 0.0
                .float 0.2
                .word 1
                .float 2.010, 1.030, 0.827, 0.0
                .float 0.229

                .float 7.009, 0.200, -10.467, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 7.290, 0.200, -9.614, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 7.333, 0.200, -8.571, 0.0
                .float 0.2
                .word 0
                .float 0.164, 0.283, 0.227, 0.0
                .float 0.0

                .float 7.305, 0.200, -7.830, 0.0
                .float 0.2
                .word 1
                .float 1.736, 2.390, 1.006, 0.0
                .float 0.475

                .float 7.348, 0.200, -6.903, 0.0
                .float 0.2
                .word 0
                .float 0.011, 0.000, 0.081, 0.0
                .float 0.0

                .float 7.117, 0.200, -5.309, 0.0
                .float 0.2
                .word 0
                .float 0.089, 0.350, 0.603, 0.0
                .float 0.0

                .float 7.364, 0.200, -4.140, 0.0
                .float 0.2
                .word 0
                .float 0.824, 0.195, 0.030, 0.0
                .float 0.0

                .float 7.822, 0.200, -3.104, 0.0
                .float 0.2
                .word 1
                .float 2.228, 1.263, 2.399, 0.0
                .float 0.056

                .float 7.214, 0.200, -2.134, 0.0
                .float 0.2
                .word 0
                .float 0.050, 0.281, 0.030, 0.0
                .float 0.0

                .float 7.848, 0.200, -1.907, 0.0
                .float 0.2
                .word 0
                .float 0.594, 0.060, 0.558, 0.0
                .float 0.0

                .float 7.114, 0.200, -0.466, 0.0
                .float 0.2
                .word 0
                .float 0.272, 0.003, 0.544, 0.0
                .float 0.0

                .float 7.180, 0.200, 0.019, 0.0
                .float 0.2
                .word 0
                .float 0.081, 0.324, 0.556, 0.0
                .float 0.0

                .float 7.000, 0.200, 1.096, 0.0
                .float 0.2
                .word 1
                .float 0.567, 0.597, 2.319, 0.0
                .float 0.246

                .float 7.732, 0.200, 2.618, 0.0
                .float 0.2
                .word 1
                .float 2.464, 1.337, 1.714, 0.0
                .float 0.054

                .float 7.011, 0.200, 3.025, 0.0
                .float 0.2
                .word 0
                .float 0.024, 0.256, 0.058, 0.0
                .float 0.0

                .float 7.285, 0.200, 4.617, 0.0
                .float 0.2
                .word 0
                .float 0.258, 0.155, 0.278, 0.0
                .float 0.0

                .float 7.270, 0.200, 5.137, 0.0
                .float 0.2
                .word 1
                .float 1.198, 0.624, 1.153, 0.0
                .float 0.081

                .float 7.673, 0.200, 6.155, 0.0
                .float 0.2
                .word 0
                .float 0.130, 0.045, 0.631, 0.0
                .float 0.0

                .float 7.752, 0.200, 7.759, 0.0
                .float 0.2
                .word 0
                .float 0.096, 0.320, 0.038, 0.0
                .float 0.0

                .float 7.022, 0.200, 8.776, 0.0
                .float 0.2
                .word 1
                .float 0.936, 0.918, 1.888, 0.0
                .float 0.259

                .float 7.326, 0.200, 9.476, 0.0
                .float 0.2
                .word 1
                .float 1.348, 2.211, 0.558, 0.0
                .float 0.086

                .float 7.025, 0.200, 10.156, 0.0
                .float 0.2
                .word 0
                .float 0.343, 0.317, 0.074, 0.0
                .float 0.0

                .float 8.410, 0.200, -10.229, 0.0
                .float 0.2
                .word 0
                .float 0.106, 0.561, 0.634, 0.0
                .float 0.0

                .float 8.417, 0.200, -9.501, 0.0
                .float 0.2
                .word 0
                .float 0.167, 0.024, 0.437, 0.0
                .float 0.0

                .float 8.412, 0.200, -8.430, 0.0
                .float 0.2
                .word 0
                .float 0.416, 0.741, 0.089, 0.0
                .float 0.0

                .float 8.439, 0.200, -7.929, 0.0
                .float 0.2
                .word 0
                .float 0.450, 0.083, 0.595, 0.0
                .float 0.0

                .float 8.234, 0.200, -6.712, 0.0
                .float 0.2
                .word 0
                .float 0.171, 0.017, 0.132, 0.0
                .float 0.0

                .float 8.080, 0.200, -5.560, 0.0
                .float 0.2
                .word 0
                .float 0.617, 0.170, 0.209, 0.0
                .float 0.0

                .float 8.007, 0.200, -4.508, 0.0
                .float 0.2
                .word 1
                .float 0.895, 0.570, 2.314, 0.0
                .float 0.298

                .float 8.789, 0.200, -3.603, 0.0
                .float 0.2
                .word 1
                .float 0.906, 0.823, 1.857, 0.0
                .float 0.231

                .float 8.433, 0.200, -2.850, 0.0
                .float 0.2
                .word 0
                .float 0.056, 0.055, 0.083, 0.0
                .float 0.0

                .float 8.188, 0.200, -1.488, 0.0
                .float 0.2
                .word 1
                .float 0.812, 1.041, 0.619, 0.0
                .float 0.367

                .float 8.569, 0.200, -0.940, 0.0
                .float 0.2
                .word 0
                .float 0.122, 0.116, 0.165, 0.0
                .float 0.0

                .float 8.728, 0.200, 0.641, 0.0
                .float 0.2
                .word 0
                .float 0.379, 0.387, 0.300, 0.0
                .float 0.0

                .float 8.644, 0.200, 1.691, 0.0
                .float 0.2
                .word 0
                .float 0.117, 0.502, 0.500, 0.0
                .float 0.0

                .float 8.720, 0.200, 2.098, 0.0
                .float 0.2
                .word 0
                .float 0.395, 0.589, 0.199, 0.0
                .float 0.0

                .float 8.117, 0.200, 3.512, 0.0
                .float 0.2
                .word 1
                .float 1.143, 1.256, 1.623, 0.0
                .float 0.358

                .float 8.313, 0.200, 4.857, 0.0
                .float 0.2
                .word 0
                .float 0.407, 0.058, 0.201, 0.0
                .float 0.0

                .float 8.856, 0.200, 5.491, 0.0
                .float 0.2
                .word 0
                .float 0.228, 0.042, 0.375, 0.0
                .float 0.0

                .float 8.836, 0.200, 6.210, 0.0
                .float 0.2
                .word 0
                .float 0.323, 0.414, 0.001, 0.0
                .float 0.0

                .float 8.174, 0.200, 7.343, 0.0
                .float 0.2
                .word 1
                .float 2.321, 1.960, 2.173, 0.0
                .float 0.242

                .float 8.477, 0.200, 8.311, 0.0
                .float 0.2
                .word 0
                .float 0.028, 0.324, 0.140, 0.0
                .float 0.0

                .float 8.533, 0.200, 9.496, 0.0
                .float 0.2
                .word 1
                .float 2.476, 0.586, 1.900, 0.0
                .float 0.458

                .float 8.248, 0.200, 10.167, 0.0
                .float 0.2
                .word 0
                .float 0.469, 0.379, 0.713, 0.0
                .float 0.0

                .float 9.085, 0.200, -10.218, 0.0
                .float 0.2
                .word 0
                .float 0.581, 0.042, 0.036, 0.0
                .float 0.0

                .float 9.360, 0.200, -9.394, 0.0
                .float 0.2
                .word 0
                .float 0.334, 0.866, 0.319, 0.0
                .float 0.0

                .float 9.880, 0.200, -8.608, 0.0
                .float 0.2
                .word 0
                .float 0.636, 0.386, 0.151, 0.0
                .float 0.0

                .float 9.076, 0.200, -7.879, 0.0
                .float 0.2
                .word 0
                .float 0.185, 0.094, 0.049, 0.0
                .float 0.0

                .float 9.507, 0.200, -6.633, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 9.253, 0.200, -5.273, 0.0
                .float 0.2
                .word 0
                .float 0.066, 0.095, 0.171, 0.0
                .float 0.0

                .float 9.009, 0.200, -4.844, 0.0
                .float 0.2
                .word 0
                .float 0.035, 0.005, 0.274, 0.0
                .float 0.0

                .float 9.523, 0.200, -3.366, 0.0
                .float 0.2
                .word 0
                .float 0.474, 0.109, 0.822, 0.0
                .float 0.0

                .float 9.046, 0.200, -2.531, 0.0
                .float 0.2
                .word 0
                .float 0.015, 0.049, 0.035, 0.0
                .float 0.0

                .float 9.127, 0.200, -1.711, 0.0
                .float 0.2
                .word 0
                .float 0.005, 0.211, 0.613, 0.0
                .float 0.0

                .float 9.311, 0.200, -0.930, 0.0
                .float 0.2
                .word 0
                .float 0.519, 0.015, 0.323, 0.0
                .float 0.0

                .float 9.151, 0.200, 0.646, 0.0
                .float 0.2
                .word 0
                .float 0.020, 0.010, 0.658, 0.0
                .float 0.0

                .float 9.331, 0.200, 1.402, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 9.584, 0.200, 2.529, 0.0
                .float 0.2
                .word 0
                .float 0.075, 0.475, 0.434, 0.0
                .float 0.0

                .float 9.442, 0.200, 3.246, 0.0
                .float 0.2
                .word 0
                .float 0.050, 0.178, 0.333, 0.0
                .float 0.0

                .float 9.382, 0.200, 4.532, 0.0
                .float 0.2
                .word 0
                .float 0.578, 0.266, 0.057, 0.0
                .float 0.0

                .float 9.725, 0.200, 5.251, 0.0
                .float 0.2
                .word 0
                .float 0.709, 0.004, 0.037, 0.0
                .float 0.0

                .float 9.592, 0.200, 6.744, 0.0
                .float 0.2
                .word 0
                .float 0.040, 0.605, 0.142, 0.0
                .float 0.0

                .float 9.788, 0.200, 7.016, 0.0
                .float 0.2
                .word 0
                .float 0.293, 0.164, 0.225, 0.0
                .float 0.0

                .float 9.398, 0.200, 8.314, 0.0
                .float 0.2
                .word 0
                .float 0.078, 0.010, 0.652, 0.0
                .float 0.0

                .float 9.099, 0.200, 9.867, 0.0
                .float 0.2
                .word 0
                .float 0.503, 0.257, 0.678, 0.0
                .float 0.0

                .float 9.304, 0.200, 10.376, 0.0
                .float 0.2
                .word 0
                .float 0.088, 0.049, 0.492, 0.0
                .float 0.0

                .float 10.596, 0.200, -10.889, 0.0
                .float 0.2
                .word 1
                .float 1.012, 1.632, 0.984, 0.0
                .float 0.380

                .float 10.063, 0.200, -9.644, 0.0
                .float 0.2
                .word 0
                .float 0.026, 0.049, 0.004, 0.0
                .float 0.0

                .float 10.003, 0.200, -8.191, 0.0
                .float 0.2
                .word 0
                .float 0.284, 0.397, 0.036, 0.0
                .float 0.0

                .float 10.069, 0.200, -7.678, 0.0
                .float 0.2
                .word 0
                .float 0.239, 0.065, 0.020, 0.0
                .float 0.0

                .float 10.611, 0.200, -6.997, 0.0
                .float 0.2
                .word 0
                .float 0.032, 0.672, 0.157, 0.0
                .float 0.0

                .float 10.212, 0.200, -5.684, 0.0
                .float 0.2
                .word 0
                .float 0.088, 0.149, 0.651, 0.0
                .float 0.0

                .float 10.328, 0.200, -4.487, 0.0
                .float 0.2
                .word 1
                .float 2.361, 1.794, 0.985, 0.0
                .float 0.284

                .float 10.368, 0.200, -3.500, 0.0
                .float 0.2
                .word 0
                .float 0.826, 0.392, 0.055, 0.0
                .float 0.0

                .float 10.856, 0.200, -2.938, 0.0
                .float 0.2
                .word 0
                .float 0.211, 0.124, 0.008, 0.0
                .float 0.0

                .float 10.376, 0.200, -1.162, 0.0
                .float 0.2
                .word 0
                .float 0.197, 0.006, 0.264, 0.0
                .float 0.0

                .float 10.510, 0.200, -0.152, 0.0
                .float 0.2
                .word 0
                .float 0.047, 0.593, 0.125, 0.0
                .float 0.0

                .float 10.561, 0.200, 0.625, 0.0
                .float 0.2
                .word 0
                .float 0.437, 0.313, 0.564, 0.0
                .float 0.0

                .float 10.139, 0.200, 1.671, 0.0
                .float 0.2
                .word 0
                .float 0.028, 0.173, 0.092, 0.0
                .float 0.0

                .float 10.329, 0.200, 2.064, 0.0
                .float 0.2
                .word 0
                .float 0.166, 0.178, 0.618, 0.0
                .float 0.0

                .float 10.080, 0.200, 3.566, 0.0
                .float 0.2
                .word 2
                .float 1.0, 1.0, 1.0, 0.0
                .float 0.0

                .float 10.696, 0.200, 4.227, 0.0
                .float 0.2
                .word 0
                .float 0.423, 0.066, 0.313, 0.0
                .float 0.0

                .float 10.163, 0.200, 5.453, 0.0
                .float 0.2
                .word 0
                .float 0.494, 0.180, 0.007, 0.0
                .float 0.0

                .float 10.390, 0.200, 6.353, 0.0
                .float 0.2
                .word 0
                .float 0.613, 0.369, 0.035, 0.0
                .float 0.0

                .float 10.168, 0.200, 7.123, 0.0
                .float 0.2
                .word 0
                .float 0.153, 0.513, 0.197, 0.0
                .float 0.0

                .float 10.148, 0.200, 8.513, 0.0
                .float 0.2
                .word 1
                .float 0.625, 2.004, 1.280, 0.0
                .float 0.353

                .float 10.439, 0.200, 9.054, 0.0
                .float 0.2
                .word 0
                .float 0.062, 0.109, 0.035, 0.0
                .float 0.0

                .float 10.075, 0.200, 10.119, 0.0
                .float 0.2
                .word 0
                .float 0.085, 0.494, 0.034, 0.0
                .float 0.0
