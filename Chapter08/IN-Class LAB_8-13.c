#include <stdio.h>

int test_swapDouble();			// swap prototype
void* swapDouble(double* pa, double* pb);

int test_print_array();			// print_array prototype
void print_double_array(double arr[], int size);
void printDoubleArray(double* arr, int size);

int main(void)
{

//	test_swapDouble();		comment out
	test_print_array();

	return 0;
}

int test_swapDouble()
{
	double a = 3.14;
	double b = 5.12;

	double* presult = (double*)swapDouble(&a, &b);
	if (presult == NULL)
	{
		printf("���� �߸��Ǿ���!!\n");
	}
	else
	{
		printf("a = %lf, b = %lf\n", a, b);
	}

	double* presult1 = (double*)swapDouble((double*)NULL, &b);
	if (presult1 == NULL)
	{
		printf("���� �߸��Ǿ���!!\n");
	}
	else
	{
		printf("a = %lf, b = %lf\n", a, b);
	}
}

void * swapDouble(double* pa, double* pb)
{
	// 1. �Է� �� �������� üũ : NULL�� �ƴϾ�� ��!!
	if (pa == NULL || pb == NULL)
	{
		return NULL;
	}

	// 2. swap two values
	double temp = *pa;

	*pa = *pb;
	*pb = temp;

	return pa; 
}

int test_print_array()
{
	double da[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

	int size = sizeof(da) / sizeof(da[0]);

	print_double_array(da, size);

	printDoubleArray(&da[0], size);

	return 0;
}

// ��� : 1���� �Ǽ� �迭�� �Է� �޾� �ֿܼ� ����Ѵ�
// �Լ��� : print_double_array
// �Է� : double Ÿ�� 1���� �迭 �ּ�
// ��� : �͹̳ο� �迭�� ������ ���ڰ�	���
// ��ȯ : ����

void print_double_array(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%lf", arr[i]);
	}
	printf("\n");
}

void printDoubleArray(double* arr, int size)
{
	for (int i = 0; i < size; i++, arr++)
	{
		printf("%lf", *arr);
	}
	printf("\n");
}