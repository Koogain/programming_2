/* 파일명: Assignmment_04.c

 * 내용: 특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소 중 최댓값을 가진 원소와 최솟값을 가진 원소를 찾아서 인덱스와 값을 함께 출력하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.09.21

 * 버전: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define SIZE 10

void inputInt(int arr[]);
void output(int arr[]);

int main(void)
{
    int arr[SIZE];

    inputInt(arr);
    output(arr);

    return 0;
}

void inputInt(int arr[])
{
    int i;
    printf("배열: ");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void output(int arr[])
{
    int i;
    int max = arr[0], min = arr[0];
    int max_idx = 0, min_idx = 0;

    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_idx = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            min_idx = i;
        }
    }

    printf("\n최대값: 인덱스=%d 값=%d", max_idx, max);
    printf("\n최소값: 인덱스=%d 값=%d\n", min_idx, min);
}