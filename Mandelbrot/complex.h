// The purpose of this file is to declare the struct
// that we use for the rest of the project
typedef struct{
// Declare the variables
        double x, y;
} complex_t;
// This just shows which numbers should be calculated
// Instead of using the input statements
complex_t complex_add(complex_t, complex_t);
complex_t complex_mult(complex_t, complex_t);
// Since this is the only one that can have decimals we use double
double complex_abs(c_t);
