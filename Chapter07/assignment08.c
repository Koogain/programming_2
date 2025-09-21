/* ���ϸ�: Assignmment_08.c

 * ����: ��ǰ ������ ����� ������ �迭�� ���Ͽ� �������� �Է¹޾� ���ε� ������ ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.09.21

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

void inputDouble(int arr[]);
double inputPercent();
void output(double per, int arr[], int arrDis[]);

int main(void)
{
	int arr[SIZE];
	int arrDis[SIZE];
	inputDouble(arr);
	double per = inputPercent();
	output(per, arr, arrDis);
	return 0;
}

void inputDouble(int arr[])
{
	int i;
	printf("��ǰ�� 5���� �Է��ϼ���: ");
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &arr[i]);
	}
}
double inputPercent()
{
	double per = 0;
	printf("������(%)? ");
	scanf("%lf", &per);
	return per;
}

void output(double per, int arr[], int arrDis[])
{
	int i;
	for (i = 0; i < SIZE; i++) {
		arrDis[i] = (arr[i] / 100) * (100 - per);
	}

	for (i = 0; i < SIZE; i++) {
		printf("����:%7d --> ���ΰ�:%7d\n", arr[i], arrDis[i]);
	}

}