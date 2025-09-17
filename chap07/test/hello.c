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
		printf("오류\n");
	}
	else
	{
		printf("a = %f , b = %f\n", a, b);
	}

	presult = (double*)swapDouble((double*)NULL, &b);
	if (presult == NULL)
	{
		printf("오류\n");
	}

	return;
}

void *swapDouble(double* pa, double* pb)
{
	// 1. 입력 값 정상인지 체크 : NULL이 아니어야 함
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

// 기능 : 1차원 실수 배열을 출력한다
// 함수명 : print_array_double
// 입력 : double 타입 1차원 배열 주소
// 출력 : 터미널에 배열의 내용을 예쁘게 출력
// 반환 : void

void print_array_double(double arr[], int size) // 배열
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%.2f ", arr[i]);
	}
	printf("\n");
}

void print_array_double2(double * arr, int size) // 포인터
{
	int i;
	for (i = 0; i < size; i++, arr++)
	{
		printf("%.2f ", *arr);
	}
	printf("\n");
}

// 함수 포인터
int test_function_pointer()
{
	double (*pfunc)(double, double) = NULL;

	pfunc = add;

	printf("add(3,4) = %f\n", (*pfunc) (3.0, 4.0));

	pfunc = mul;
	printf("mul(3,4) = %f\n", (*pfunc) (3.0, 4.0));
}

// 기능 : 덧셈 결과 반환
// 입력 : 두 실수
// 출력 : 더한 값
double add(double a, double b)
{
	return a + b;
}

// 기능 : 뺄셈 결과 반환
// 입력 : 두 실수
// 출력 : 뺀 값
double sub(double a, double b)
{
	return a - b;
}

// 기능 : 곱셈 결과 반환
// 입력 : 두 실수
// 출력 : 곱한 값
double mul(double a, double b)
{
	return a * b;
}