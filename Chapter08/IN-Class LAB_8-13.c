#include <stdio.h>

int test_swapDouble();
void* swapDouble(double* pa, double* pb);

int test_print_array();
void print_double_array(double arr[], int size);
void printDoubleArray(double* arr, int size);

int main(void)
{

//	test_swapDouble();		comment out
	test_print_array();

	return 0;
}

int test_swapDouble()
{
	double a = 3.14;
	double b = 5.12;

	double* presult = (double*)swapDouble(&a, &b);
	if (presult == NULL)
	{
		printf("뭔가 잘못되었어!!\n");
	}
	else
	{
		printf("a = %lf, b = %lf\n", a, b);
	}

	double* presult1 = (double*)swapDouble((double*)NULL, &b);
	if (presult1 == NULL)
	{
		printf("뭔가 잘못되었어!!\n");
	}
	else
	{
		printf("a = %lf, b = %lf\n", a, b);
	}
}

void * swapDouble(double* pa, double* pb)
{
	// 1. 입력 값 정상인지 체크 : NULL이 아니어야 함!!
	if (pa == NULL || pb == NULL)
	{
		return NULL;
	}

	// 2. swap two values
	double temp = *pa;

	*pa = *pb;
	*pb = temp;

	return pa; 
}

int test_print_array()
{
	double da[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

	int size = sizeof(da) / sizeof(da[0]);

	print_double_array(da, size);

	printDoubleArray(&da[0], size);

	return 0;
}

// 기능 : 1차원 실수 배열을 입력 받아 콘솔에 출력한다
// 함수명 : print_double_array
// 입력 : double 타입 1차원 배열 주소
// 출력 : 터미널에 배열의 내용을 예쁘게	출력
// 반환 : 없음

void print_double_array(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%lf", arr[i]);
	}
	printf("\n");
}

void printDoubleArray(double* arr, int size)
{
	for (int i = 0; i < size; i++, arr++)
	{
		printf("%lf", *arr);
	}
	printf("\n");
}