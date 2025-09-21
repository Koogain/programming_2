/* 파일명: Assignmment_12.c

 * 내용: 기차표 예매 프로그램을 작성하려고 한다.
         간단한 구현을 위해 좌석은 모두 10개라고 하자.
         예매할 좌석수를 입력받아 빈 자리를 할당한다.
         예매할 마다 각 좌석의 상태를 출력한다.
         O이면 예메 가능, X는 예매 불가를 위미한다.
         더 이상 예메할 수 없으면 프로그램을 종료한다.
 * 작성자: 구가인

 * 날짜: 2025.09.21

 * 버전: v1.0

 */
#include <stdio.h>

#define SEATS 10

void printSeats(int seats[]);
int reserveSeats(int seats[], int count);
int inputSeatCount(void);

int main(void)
{
    int seats[SEATS] = { 0 }; // 좌석 상태: 0 = 예약 가능, 1 = 예약됨
    int reserveCount;

    while (1)
    {
        printSeats(seats);
        reserveCount = inputSeatCount(); // 입력 함수 호출

        if (!reserveSeats(seats, reserveCount))
        {
            printf("자리가 부족하거나 예매 불가능합니다. 프로그램을 종료합니다.\n");
            break;
        }
    }

    return 0;
}

// 사용자로부터 예매할 좌석 수를 입력받는 함수
int inputSeatCount(void)
{
    int count;
    printf("예매할 좌석수? [ ");
    scanf("%d", &count);
    printf("]\n");
    return count;
}

// 현재 좌석 상태를 출력
void printSeats(int seats[])
{
    printf("현재 좌석: [ ");
    for (int i = 0; i < SEATS; i++)
    {
        if (seats[i] == 0)
        {
            printf("O ");
        }
        else
        {
            printf("X ");
        }
    }
    printf("]\n");
}

// 좌석을 예약하고 성공 여부 반환
int reserveSeats(int seats[], int count)
{
    int i, reserved = 0;

    for (i = 0; i < SEATS && reserved < count; i++)
    {
        if (seats[i] == 0)
        {
            seats[i] = 1;
            reserved++;
        }
    }

    if (reserved < count)
    {
        return 0; // 예약 실패
    }

    // 예약된 좌석 번호 출력
    printf("예매한 좌석: ");
    for (i = 0, reserved = 0; i < SEATS && reserved < count; i++)
    {
        if (seats[i] == 1)
        {
            reserved++;
            printf("%d ", i + 1);
        }
    }
    printf("번 좌석을 예매했습니다.\n");

    return 1; // 예약 성공
}