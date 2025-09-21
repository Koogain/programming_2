/* 파일명: Assignmment_08.c

 * 내용: 상품 가격이 저장된 정수형 배열에 대하여 할인율을 입력받아 할인된 각겨을 계산해서 출력하는 프로그램일 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.09.21

 * 버전: v1.0

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
	printf("상품가 5개를 입력하세요: ");
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &arr[i]);
	}
}
double inputPercent()
{
	double per = 0;
	printf("할인율(%)? ");
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
		printf("가격:%7d --> 할인가:%7d\n", arr[i], arrDis[i]);
	}

}