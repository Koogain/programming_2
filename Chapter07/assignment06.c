/* ���ϸ�: Assignmment_06.c

 * ����: ũ�Ⱑ 10�� �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.09.21

 * ����: v1.0

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
	printf("�迭: ");
	for (i = 0; i < SIZE; i++)
	{
		scanf("%lf", &arr[i]);
	}
}

void outputReverse(double arr[])
{
	int i;

	printf("\n����:");
	for (i = 9; i >= 0; i--)
	{
		printf(" %.1lf", arr[i]);
	}
}