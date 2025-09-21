#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int inputComm();     // 첫 번째 항 입력
int inputDiff();     // 공차 입력
void outputArr(int comm, int diff); // 등차수열 출력

int main(void)
{
    int comm, diff;

    comm = inputComm();
    diff = inputDiff();

    outputArr(comm, diff);

    return 0;
}

int inputComm()     // 첫 번째 항 입력
{
    int comm;
    printf("첫 번째 항? ");
    scanf("%d", &comm);
    return comm;
}

int inputDiff()        // 공차 입력
{
    int diff;
    printf("공차? ");
    scanf("%d", &diff);
    return diff;
}

void outputArr(int comm, int diff)
{
    int i;
    int arr[10];

    printf("등차수열:");
    for (i = 0; i < 10; i++) {
        arr[i] = comm + i * diff;
        printf(" %d", arr[i]);
    }
    printf("\n");
}