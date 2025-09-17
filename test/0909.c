#include <stdio.h>

void copy_array(int from[], int to[], int size);

int main(void)
{
	// test_copy_array();

	return 0;
}

#ifdef DEBUG
int test_copy_array(void)	// x,y  선언
{
#define LEN 5

	int x[LEN] = { 1, 2, 3, 4, 5 };
	int y[LEN] = { 0, };

	int size = sizeof(y) / sizeof(y[0]);

	copy_array(x, y, LEN);

	for (int i = 0; i < LEN;)
	{
		if (y[i] != x[i])
		{
			printf("Test failed\n");
			return -1;
		}
	}
	return 0;
}
#endif

void copy_array(int from[], int to[], int size)		// x -> y로 복사
{
	int i = 0;

	for (i = 0; i < size; i++)
	{
		to[i] = from[i];
	}
}