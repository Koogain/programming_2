#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int inputComm();     // ù ��° �� �Է�
int inputDiff();     // ���� �Է�
void outputArr(int comm, int diff); // �������� ���

int main(void)
{
    int comm, diff;

    comm = inputComm();
    diff = inputDiff();

    outputArr(comm, diff);

    return 0;
}

int inputComm()     // ù ��° �� �Է�
{
    int comm;
    printf("ù ��° ��? ");
    scanf("%d", &comm);
    return comm;
}

int inputDiff()        // ���� �Է�
{
    int diff;
    printf("����? ");
    scanf("%d", &diff);
    return diff;
}

void outputArr(int comm, int diff)
{
    int i;
    int arr[10];

    printf("��������:");
    for (i = 0; i < 10; i++) {
        arr[i] = comm + i * diff;
        printf(" %d", arr[i]);
    }
    printf("\n");
}