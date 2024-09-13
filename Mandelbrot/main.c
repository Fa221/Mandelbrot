#include <stdio.h>
#include "complex.h"
#include "mandelbrot.h"
#include "mandelbrot_print.h"

// Include the struct
complex_t c;
// Has to have a main function to reference to
int main(){
// Declare variables
// this one is for the 2D printing that is required
    char pic[h][v];
// Declare variables to Oscillate for the print
    int num1;
    int num2;
// Declare the variables from a struct
    complex_t faraz;
    c.x = -2.0;
    c.y = -1.12;


// Calculations for height and length that include the restraints
    double length = (0.48 + 1.75)/v;
    double height = (1.12 + 1.12)/h;
// Prints the whole mandelbrot set using two for loops so that it prints the whole thing
    for (num1=0; num1<h; num1++) {
        for(num2=0; num2<v; num2++) {
            f = mandelbrot(15);
            if (complex_abs(f) > 10000) {
// Everything outside is a 0 and everything inside is accordance with the project sheet
            pic[num1][num2] = ' ';
            }else{
                pic[num1][num2] = '#';
            }
// Adds to the length so that it foes through the whole thing
            c.x += length;
        }
        pic[num1][num2-1] = '\0';
        c.y += length;
        c.x = -1.56;
    }
    mandelbrot_print(pic);

    return 1;
}

