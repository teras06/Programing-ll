#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5

int test_copy_array(void);
void copy_array(int from[], int to[], int size);

int main()
{
	printf("hello");

	return 0;
}

// ifdef DEBUG
int test_copy_array(void)
{
	int x[LEN] = { 1,2,3,4,5 };
	int y[LEN] = { 0 };

	int size = sizeof(y) / sizeof(y[0]);

	copy_array(x, y, size);
	
	int i;
	for (i = 0; i < LEN; i++)
	{
		if (y[i] != x[i])
		{
			return -1;
		}
	}

	return 0;
}

void copy_array(int from[], int to[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		to[i] = from[i];
	}
}
// ifdef ENDIF