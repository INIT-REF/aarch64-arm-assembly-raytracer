# aarch64/arm assembly raytracer

A raytracer following the Raytracing tutorials by Peter Shirley, Trevor David Black and Steve Hollasch.

At the moment, the first book of the series is done, and the result looks like this (using an output size of 800x450, 400 samples per pixel and a maximum depth of 50):

I am just starting out with ARM assembly, so I can't give any guarantees that the code will work as is on your device. But it compiles and runs fine on my Pi 5 (using Pi OS Trixie) by running the following lines:

```
as ./src/main.s -o main.o
ld main.o -o main
./main
```

If you have ImageMagick installed, you can easily convert the resulting PPM image to PNG by running ```magick image.ppm image.png```
