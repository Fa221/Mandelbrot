m: main.o mandelbrot.o complex.o mprint.o
	gcc -o m main.o mandelbrot.o complex.o mprint.o -lm
main.o: main.c mandelbrot.h complex.h
	gcc -c main.c

mandelbrot.o: mandelbrot.c mandelbrot.h complex.h
	gcc -c mandelbrot.c

complex.o: complex.c complex.h
	gcc -c complex.c

mprint.o: mprint.c mandelbrot_print.h
	gcc -c mprint.c

