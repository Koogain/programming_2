/* ���ϸ�: Assignmment_10.c

 * ����: 3x3 ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.09.21

 * ����: v1.0

 */
#include <stdio.h>

#define SIZE 3

 // �Լ� ����
void addMatrix(int x[SIZE][SIZE], int y[SIZE][SIZE], int result[SIZE][SIZE]);
void printMatrix(const char* name, int m[SIZE][SIZE]);

int main(void)
{
    // ��� �ʱ�ȭ
    int x[SIZE][SIZE] =
    {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int y[SIZE][SIZE] =
    {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[SIZE][SIZE]; // ��� ���

    // ��� ���� ����
    addMatrix(x, y, result);

    // ���
    printf("��� x:\n");
    printMatrix("x", x);

    printf("\n��� y:\n");
    printMatrix("y", y);

    printf("\nx + y ���:\n");
    printMatrix("x+y", result);

    return 0;
}

// ��� ���� �Լ�
void addMatrix(int x[SIZE][SIZE], int y[SIZE][SIZE], int result[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            result[i][j] = x[i][j] + y[i][j];
        }
    }
}

// ��� ��� �Լ�
void printMatrix(const char* name, int m[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
}