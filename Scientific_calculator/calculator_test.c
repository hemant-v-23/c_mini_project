/************ this unit testing is done using cmocka unit testing tool ************/


#include<stdio.h>
#include<stdarg.h>
#include<stddef.h>
#include<setjmp.h>
#include<cmocka.h>
#include<stdlib.h>
#include<math.h>


extern int addition(int x, int y);

extern int subtraction(int x, int y);

extern int multiplication(int x,int y);

extern int division(int x, int y);

extern int power(int x,int y);

extern int square(int x);

extern int cube(int x);

extern int sine(int  x);

extern int cosine(int x);

extern int tangent(int x);

extern int sineh(int x);

extern int cosineh(int x);

extern int tangenth(int x);

extern int logten(int x);

extern int squareroot(int x);

#define PI 3.14159265
/*****************************************************************************/

void test_case1(void **state)
{
int  a=35.36,b=99,c;
c = a + b;
assert_int_equal(c,addition(a,b));
assert_int_not_equal(a,addition(a,b));
}

void test_case2(void **state)
{
int a=86,b=9,c;
c = a - b;
assert_int_not_equal(a,subtraction(a,b));
assert_int_equal(c,subtraction(a,b));
}

void test_case3(void **state)
{
int a=86,b=9,c;
c = a * b;
assert_int_not_equal(a,multiplication(a,b));
assert_int_equal(c,multiplication(a,b));
}

void test_case4(void **state)
{
int a=86,b=9,c;
c = a / b;
assert_int_not_equal(a,division(a,b));
assert_int_equal(c,division(a,b));
}

void test_case5(void **state)
{
int a=4,b;
b = sin (a*PI/180);
assert_int_equal(b,sine(a));
assert_int_not_equal(a,sine(a));
}

void test_case6(void **state)
{
int a=86,b;
b = cos(a*PI/180);
assert_int_not_equal(a,cosine(a));
assert_int_equal(b,cosine(a));
}

void test_case7(void **state)
{
int a=86,b;
b = tan(a*PI/180);
assert_int_not_equal(a,tangent(a));
assert_int_equal(b,tangent(a));
}

void test_case8(void **state)
{
int a=86,b;
b = cosh(a);
assert_int_equal(b,cosineh(a));
assert_int_not_equal(a,cosineh(a));
}

void test_case9(void **state)
{
int a=86,b;
b = sinh(a);
assert_int_equal(b,sineh(a));
assert_int_not_equal(a,sineh(a));
}

void test_case10(void **state)
{
int a=86,b;
b = tanh(a);
assert_int_equal(b,tangenth(a));
assert_int_not_equal(a,tangenth(a));
}

void test_case11(void **state)
{
int a=86,b;
b = log10(a);
assert_int_equal(b,logten(a));
assert_int_not_equal(a,logten(a));
}

void test_case12(void **state)
{
int a=86,b;
b = sqrt(a);
assert_int_equal(b,squareroot(a));
assert_int_not_equal(a,squareroot(a));
}

void test_case13(void **state)
{
int a=5,b=2,c;
c = pow(a,b);
assert_int_equal(c,power(a,b));
assert_int_not_equal(a,power(a,b));
}

void test_case14(void **state)
{
int a=86,b;
b = a*a;
assert_int_equal(b,square(a));
assert_int_not_equal(a,square(a));
}

void test_case15(void **state)
{
int a=86,b;
b = a*a*a;
assert_int_equal(b,cube(a));
assert_int_not_equal(a,cube(a));
}

int main(void)
{

        const struct CMUnitTest tests[] = {

		cmocka_unit_test(test_case1),
		cmocka_unit_test(test_case2),
		cmocka_unit_test(test_case3),
		cmocka_unit_test(test_case4),
		cmocka_unit_test(test_case5),
		cmocka_unit_test(test_case6),
		cmocka_unit_test(test_case7),
		cmocka_unit_test(test_case8),
		cmocka_unit_test(test_case9),
		cmocka_unit_test(test_case10),
		cmocka_unit_test(test_case11),
		cmocka_unit_test(test_case12),
		cmocka_unit_test(test_case13),
		cmocka_unit_test(test_case14),
		cmocka_unit_test(test_case15),
        };

        return cmocka_run_group_tests(tests, NULL, NULL);

}