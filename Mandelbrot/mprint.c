#include <stdio.h>
// Includes the Mandelbrot Print
#include "mandelbrot_print.h"
// the pupose of this file is to help do the printing and pic is the
// madnelbrot set
void mandelbrot_print(char pic[h][v]) {
// Initialize Variables
    int num = 0;
// Basic for loop for 2D printing and increments the
// Variable num
    for(num=0; num<h; num++)
        printf("%s\n", pic[num]);
}
