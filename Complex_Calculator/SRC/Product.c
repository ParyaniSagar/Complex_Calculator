#include "../program.h"
#include "stdio.h"

error_t Product(complex_t* num1, complex_t* num2, complex_t* answer)
{   

    answer->real = ((num1->real*num2->real) - (num1->imaginary*num2->imaginary));
    answer->imaginary = (num1->real*num2->imaginary) + (num1->imaginary*num2->real);
    if ((answer->imaginary) < 0)
    {
        printf("Product is %f  %fi\n", answer->real, answer->imaginary);
    } 
    else
    {
        printf("Product is %f + i%f\n", answer->real, answer->imaginary);
    }
    return SUCCESS;
}