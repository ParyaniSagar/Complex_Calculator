#include "../program.h"
#include "math.h"
#include "stdio.h"

error_t Divide(complex_t* num1, complex_t* num2, complex_t* answer)
{  
    if (num2->real == 0 && num2->imaginary == 0)
        return DIV_BY_ZERO;
    else
        answer->real = ((num1->real*num2->real)+(num1->imaginary*num2->imaginary))/(pow(num2->real,2)+pow(num2->imaginary,2));
        answer->imaginary = ((num1->imaginary*num2->real)-(num1->real*num2->imaginary))/(pow(num2->real,2)+pow(num2->imaginary,2));
        if ((answer->imaginary) < 0)
        {
            printf("Division is %f  %fi\n", answer->real, answer->imaginary);
        } 
        else
        {
            printf("Division is %f + i%f\n", answer->real, answer->imaginary);
        }
}