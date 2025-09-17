/* 파일명: lab1.c

 * 내용: 실수 배열에 대한 다음 두 함수 void printArrayFloat(float R[], int size); ,void copyArrayFloat(float from[], float to[], int size); 를 구현하고 
         Test 함수를 작성하여 main에서 실행해 보시오

 * 작성자: 김영재

 * 날짜: 2025.09.16
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




