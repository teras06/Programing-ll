/* ���ϸ�: lab1.c

 * ����: �Ǽ� �迭�� ���� ���� �� �Լ� void printArrayFloat(float R[], int size); ,void copyArrayFloat(float from[], float to[], int size); �� �����ϰ� 
         Test �Լ��� �ۼ��Ͽ� main���� ������ ���ÿ�

 * �ۼ���: �迵��

 * ��¥: 2025.09.16
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 5

void printArrayFloat(float R[], int size);
void copyArrayFloat(float from[], float to[], int size);
int test_printArrayFloat(void);
int test_copyArrayFloat(void);

int main()
{
	test_printArrayFloat();
	test_copyArrayFloat();

	return 0;
}


void printArrayFloat(float R[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%.2f ", R[i]);
	}
	printf("\n");
}


int test_printArrayFloat(void)
{
	float c[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };

	printf("c = ");
	printArrayFloat(c, ARR_SIZE);

	return 0;
}


void copyArrayFloat(float from[], float to[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		to[i] = from[i];
	}
}


int test_copyArrayFloat(void)
{
	float x[ARR_SIZE] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	float y[ARR_SIZE] = { 0.0 };

	copyArrayFloat(x, y, ARR_SIZE);

	printf("y = ");

	printArrayFloat(y, ARR_SIZE);

	return 0;
}




