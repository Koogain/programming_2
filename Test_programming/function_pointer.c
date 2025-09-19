#include <stdio.h>

int test_function_pointer();

int main()
{
	test_function_pointer();

	return 0;
}

// ��� : �Ǽ� ���� ��� ��ȯ
// �Է� : �� �Ǽ�
// ��� : ���� ��
double add(double a, double b)
{
	return a + b;
}

// ��� : �Ǽ� ���� ��� ��ȯ
// �Է� : �� �Ǽ�
// ��� : ���� ��
double sub(double a, double b)
{
	return a - b;
}

// ���: �Ǽ� ���� ��� ��ȯ
// �Է� : �� �Ǽ�
// ��� : ���� ��
double mul(double a, double b)
{
	return a * b;
}

int test_function_pointer()
{
	double(*pfunc)(double, double) = NULL;
	double result = 0.0;

	pfunc = add;

	printf("add(3,4)= %f\n", add(3.0, 4.0));

	result = (*pfunc) (3, 4);	// 7.0?
	printf("add(3,4)= %f\n", (*pfunc)(3.0, 4.0));

	pfunc = mul;
	printf("add(3,4)= %f\n", (*pfunc)(3.0, 4.0));

}