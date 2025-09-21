/* ���ϸ�: Assignmment_04.c

 * ����: Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ��� ���� ���ҿ� �ּڰ��� ���� ���Ҹ� ã�Ƽ� �ε����� ���� �Բ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.09.21

 * ����: v1.0

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
    printf("�迭: ");
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

    printf("\n�ִ밪: �ε���=%d ��=%d", max_idx, max);
    printf("\n�ּҰ�: �ε���=%d ��=%d\n", min_idx, min);
}