#include "../program.h"
#include "stdio.h"

error_t Difference(complex_t* num1, complex_t* num2,complex_t* answer)
{   
    answer->real = num1->real - num2->real;
    answer->imaginary = num1->imaginary - num2->imaginary;
    if ((answer->imaginary) < 0)
    {
        printf("Difference is %f  %fi\n", answer->real, answer->imaginary);
    } 
    else
    {
        printf("Difference is %f + i%f\n", answer->real, answer->imaginary);
    }
    return SUCCESS;
}