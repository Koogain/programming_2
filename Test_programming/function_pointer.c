#include <stdio.h>

int test_function_pointer();

int main()
{
	test_function_pointer();

	return 0;
}

// 함수명 : 실수 덧셈 함수
// 기능 : 실수 2개를 입력받아 더한 후 반환함
// 입력 : 실수 2개
// 출력 : 실수 2개를 덧셈한 값
double add(double a, double b)
{
	return a + b;
}


// 함수명 : 실수 뺄셈 함수
// 기능 : 실수 2개를 입력받아 뺀 후 반환함
// 입력 : 실수 2개
// 출력 : 실수 2개를 뺀 값
double sub(double a, double b)
{
	return a - b;
}

// 함수명 : 실수 곱셉 함수
// 기능 : 실수 2개를 입력받아 곱한 후 반환함
// 입력 : 실수 2개
// 출렵 : 실수 2개를 곱한 값
double mul(double a, double b)
{
	return a * b;
}

int test_function_pointer()
{
	double(*pfunc)(double, double) = NULL;
	double result = 0.0;

	pfunc = add;

	printf("add(3,4)= %f\n", add(3.0, 4.0));

	result = (*pfunc) (3, 4);	// 7.0?
	printf("add(3,4)= %f\n", (*pfunc)(3.0, 4.0));

	pfunc = mul;
	printf("add(3,4)= %f\n", (*pfunc)(3.0, 4.0));

}