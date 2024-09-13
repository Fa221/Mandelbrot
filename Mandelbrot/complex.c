#include <math.h>
#include "complex.h"
// All of the names of the functions are from the last assignment
complex_t complex_add(complex_t a, complex_t b){
// Initialize Variables
    complex_t f;
// Calculations from the last assignments
    f.x = a.x + b.x;
    f.y = a.y + b.y;

    return f;
}
complex_t complex_mult(complex_t a, complex_t b){
// Initialize Variables
    complex_t faraz;
// Calculations from the last assignments
    f.x = a.x*b.x - a.y*b.y;
    f.y = a.x*b.y + a.y*b.x;

    return f;
}
double complex_abs(complex_t a){
// Calculations from the last assignments
    return sqrt(a.x*a.x + a.y*a.y);
}
