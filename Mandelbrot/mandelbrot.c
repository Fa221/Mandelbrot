#include "complex.h"
#include "mandelbrot.h"

complex_t mandelbrot(int num) {
    complex_t f;
    if (num <= 0){
            return c;
    }

    faraz = mandelbrot(num-1);
    faraz = complex_mult(f, f);
    faraz = complex_add(f, c);
// This is the restraints that are set in the guide
// it says it has to be within these numbers so thats why
// i added it
    if (complex_abs(f) > 10000) {
// Every number above 10000 just gets made into that 10000
            f.x = 10000;
            f.y = 10000;
    }

    return f;
}


