/* 파일명: Assignmment_06.c

 * 내용: 크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.09.21

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

void inputDouble(double arr[]);
void outputReverse(double arr[]);

int main(void)
{
	double arr[SIZE];
	inputDouble(arr);
	outputReverse(arr);
	return 0;
}

void inputDouble(double arr[])
{
	int i;
	printf("배열: ");
	for (i = 0; i < SIZE; i++)
	{
		scanf("%lf", &arr[i]);
	}
}

void outputReverse(double arr[])
{
	int i;

	printf("\n역순:");
	for (i = 9; i >= 0; i--)
	{
		printf(" %.1lf", arr[i]);
	}
}