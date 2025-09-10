#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void printArrayFloat(float R[], int size);
void copyArrayFloat(float from[], float to[], int size);
int test_printArrayFloat();
int test_copyArrayFloat();

int main()
{
	Print();

	return 0;
}

void Print(void)
{
	float arr1[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	float arr2[5] = { 0.0 };
	int size = sizeof(arr1) / sizeof(arr1[0]);


}