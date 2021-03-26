#ifndef __PROGRAM_H__
#define ___PROGRAM_H__

/**
 * @brief Structure to hold a complex number
 * 
 */
typedef struct complex_t {

float real;

float imaginary;

} complex_t;


/**
 * @brief enum error for unit testing
 * 
 */
typedef enum error_t
{
    SUCCESS = -1,
    DIV_BY_ZERO = 1,
    NULL_PTR = 0
} error_t;
/**
 * @brief TO calculate Sum of Complex Numbers
 * num1 is Complex number 1
 * num2 is complex number 2
 * 
 * @param num1 
 * @param num2 
 */
error_t Sum(complex_t* num1, complex_t* num2,complex_t* answer); 

/**
 * @brief To calculate Difference of Complex Numbers
 * num1 is Complex number 1
 * num2 is complex number 2
 * 
 * @param num1 
 * @param num2 
 */
error_t Difference(complex_t* num1, complex_t* num2,complex_t* answer);

/**
 * @brief TO calculate Product of Complex Numbers
 * num1 is Complex number 1
 * num2 is complex number 2
 * 
 * @param num1 
 * @param num2 
 */
error_t Product(complex_t* num1, complex_t* num2,complex_t* answer);

/**
 * @brief TO calculate Division of Complex Number
 * num1 is Complex number 1
 * num2 is complex number 2
 * 
 * @param num1 
 * @param num2 
 */
error_t Divide(complex_t* num1, complex_t* num2,complex_t* answerr);


#endif