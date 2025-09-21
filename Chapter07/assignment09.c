/* ���ϸ�: Assignmment_09.c

 * ����: 1~12���� �ڵ��� ����� �迭�� �����ϰ� ȭ�鿡 ���� �׷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.09.21

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MONTHS 12

void inputFare(int fare[]);
void calculateStars(const int fare[], int stars[]);
void printGraph(const int fare[], const int stars[]);

int main(void) {
    int fare[MONTHS];
    int stars[MONTHS];

    inputFare(fare);                 // ����� �Է�
    calculateStars(fare, stars);    // ��� �� �� ����
    printGraph(fare, stars);        // ���

    return 0;
}

// ����� �Է� �ޱ�
void inputFare(int fare[])
{
    printf("�� ���� �ڵ��� ����� �Է��ϼ��� (�� ����):\n");
    for (int i = 0; i < MONTHS; i++)
    {
        printf("%2d��: ", i + 1);
        scanf("%d", &fare[i]);
    }
}

// �� ���� ��� �Լ�
void calculateStars(const int fare[], int stars[])
{
    for (int i = 0; i < MONTHS; i++)
    {
        stars[i] = fare[i] / 2000;
    }
}

// �׷��� ��� �Լ�
void printGraph(const int fare[], const int stars[])
{
    printf("\n�� �ڵ��� ��� ���� �׷��� ��\n");
    for (int i = 0; i < MONTHS; i++)
    {
        printf("%2d�� %d: ", i + 1, fare[i]);
        for (int j = 0; j < stars[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}