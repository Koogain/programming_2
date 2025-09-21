/* 파일명: Assignmment_09.c

 * 내용: 1~12월의 핸드폰 요금을 배열에 저장하고 화면에 막대 그래프로 출력하는 프로그램을 작성하시오.

 * 작성자: 구가인

 * 날짜: 2025.09.21

 * 버전: v1.0

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

    inputFare(fare);                 // 사용자 입력
    calculateStars(fare, stars);    // 요금 → 별 개수
    printGraph(fare, stars);        // 출력

    return 0;
}

// 사용자 입력 받기
void inputFare(int fare[])
{
    printf("각 월의 핸드폰 요금을 입력하세요 (원 단위):\n");
    for (int i = 0; i < MONTHS; i++)
    {
        printf("%2d월: ", i + 1);
        scanf("%d", &fare[i]);
    }
}

// 별 개수 계산 함수
void calculateStars(const int fare[], int stars[])
{
    for (int i = 0; i < MONTHS; i++)
    {
        stars[i] = fare[i] / 2000;
    }
}

// 그래프 출력 함수
void printGraph(const int fare[], const int stars[])
{
    printf("\n★ 핸드폰 요금 막대 그래프 ★\n");
    for (int i = 0; i < MONTHS; i++)
    {
        printf("%2d월 %d: ", i + 1, fare[i]);
        for (int j = 0; j < stars[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}