/* 파일명: Assignmment_10.c

 * 내용: 3x3 행렬의 합을 구하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.09.21

 * 버전: v1.0

 */
#include <stdio.h>

#define SIZE 3

 // 함수 선언
void addMatrix(int x[SIZE][SIZE], int y[SIZE][SIZE], int result[SIZE][SIZE]);
void printMatrix(const char* name, int m[SIZE][SIZE]);

int main(void)
{
    // 행렬 초기화
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

    int result[SIZE][SIZE]; // 결과 행렬

    // 행렬 덧셈 수행
    addMatrix(x, y, result);

    // 출력
    printf("행렬 x:\n");
    printMatrix("x", x);

    printf("\n행렬 y:\n");
    printMatrix("y", y);

    printf("\nx + y 행렬:\n");
    printMatrix("x+y", result);

    return 0;
}

// 행렬 덧셈 함수
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

// 행렬 출력 함수
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