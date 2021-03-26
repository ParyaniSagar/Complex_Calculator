#include "program.h"

#include "unity/unity.h"
#include "unity/unity_internals.h"

void setUp(){}

void tearDown(){}

complex_t num1 = {1, 1};
complex_t num2 = {2, 5};

// static complex_t num1 = {0, 0};
// static complex_t num2 = {0, 0};
// static complex_t res = {0, 0};

void test_sum(void)
{
    complex_t sum_ans,csum;
    error_t status;
    sum_ans.real = 3;
    sum_ans.imaginary=6;
    status = Sum(&num1, &num2, &csum);
    TEST_ASSERT_EQUAL(status,SUCCESS);
    TEST_ASSERT_EQUAL(sum_ans.real,csum.real);
    TEST_ASSERT_EQUAL(sum_ans.imaginary,csum.imaginary);
    
}

void test_diff(void)
{
    complex_t diff_ans,cdiff;
    error_t status;
    status = Difference(&num1,&num2,&cdiff);
    diff_ans.real = -1;
    diff_ans.imaginary = -4;
   TEST_ASSERT_EQUAL(status,SUCCESS);
    TEST_ASSERT_EQUAL(diff_ans.real,cdiff.real);
    TEST_ASSERT_EQUAL(diff_ans.imaginary,cdiff.imaginary);
   
}


void test_pro(void)
{
    complex_t pro_ans,cpro,num3;
    error_t status;
    pro_ans.real = -3;
    pro_ans.imaginary = 7;
    status = Product(&num1,&num2,&cpro);
    TEST_ASSERT_EQUAL(pro_ans.real,cpro.real);
    TEST_ASSERT_EQUAL(pro_ans.imaginary,cpro.imaginary);

}

void test_div(void)
{
    complex_t div_ans,cdiv,num3;
    error_t status;
    div_ans.real = 0.241379;
    div_ans.imaginary = -0.103448;
    status = Divide(&num1,&num2,&cdiv);
    TEST_ASSERT_EQUAL(div_ans.real,cdiv.real);
    TEST_ASSERT_EQUAL(div_ans.imaginary,cdiv.imaginary);
    num3.real = 0;
    num3.imaginary=0;
    status = Divide(&num1,&num3,&cdiv);
    TEST_ASSERT_EQUAL(DIV_BY_ZERO,status);

}


int main()
{  
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_sum);
    RUN_TEST(test_diff);
    RUN_TEST(test_pro);
    RUN_TEST(test_div);
 
     /* Close the Unity Test Framework */
    return UNITY_END();
}
