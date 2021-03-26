#include "../program.h"
#include "stdio.h"

error_t Sum(complex_t* num1, complex_t* num2, complex_t* answer)
{

    answer->real = num1->real + num2->real;
    answer->imaginary = num1->imaginary + num2->imaginary;
    printf("Sum is %f + i%f\n", answer->real, answer->imaginary);
    return SUCCESS;
}