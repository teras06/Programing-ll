#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test_swapDouble(void);
void *swapDouble(double *a, double *b);

int test_print_array();
void print_array_double(double arr[], int size);
void print_array_double2(double arr[], int size);

int test_function_pointer();
double add(double a, double b);
double mul(double a, double b);

int main()
{
	test_swapDouble();
	test_print_array();
	test_function_pointer();

	return 0;
}

void test_swapDouble(void)
{
	double a = 3.14;
	double b = 5.12;

	double* presult = (double*)swapDouble(&a, &b);
	if (presult == NULL)
	{
		printf("����\n");
	}
	else
	{
		printf("a = %f , b = %f\n", a, b);
	}

	presult = (double*)swapDouble((double*)NULL, &b);
	if (presult == NULL)
	{
		printf("����\n");
	}

	return;
}

void *swapDouble(double* pa, double* pb)
{
	// 1. �Է� �� �������� üũ : NULL�� �ƴϾ�� ��
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
	double da[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	int size = sizeof(da) / sizeof(da[0]);

	print_array_double(da, size);

	print_array_double2(&da[0], size);

	return 0;
}

// ��� : 1���� �Ǽ� �迭�� ����Ѵ�
// �Լ��� : print_array_double
// �Է� : double Ÿ�� 1���� �迭 �ּ�
// ��� : �͹̳ο� �迭�� ������ ���ڰ� ���
// ��ȯ : void

void print_array_double(double arr[], int size) // �迭
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%.2f ", arr[i]);
	}
	printf("\n");
}

void print_array_double2(double * arr, int size) // ������
{
	int i;
	for (i = 0; i < size; i++, arr++)
	{
		printf("%.2f ", *arr);
	}
	printf("\n");
}

// �Լ� ������
int test_function_pointer()
{
	double (*pfunc)(double, double) = NULL;

	pfunc = add;

	printf("add(3,4) = %f\n", (*pfunc) (3.0, 4.0));

	pfunc = mul;
	printf("mul(3,4) = %f\n", (*pfunc) (3.0, 4.0));
}

// ��� : ���� ��� ��ȯ
// �Է� : �� �Ǽ�
// ��� : ���� ��
double add(double a, double b)
{
	return a + b;
}

// ��� : ���� ��� ��ȯ
// �Է� : �� �Ǽ�
// ��� : �� ��
double sub(double a, double b)
{
	return a - b;
}

// ��� : ���� ��� ��ȯ
// �Է� : �� �Ǽ�
// ��� : ���� ��
double mul(double a, double b)
{
	return a * b;
}