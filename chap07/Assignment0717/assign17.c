/* 파일명: assign17.c

 * 내용: PA17. 수학에서 다중집합(multiset)은 원소의 중복을 허용한다 최대 10개의 정수형 원소를 저장할 수 있는 다중집합을 프로그램하라
			   정수를 입력받아 집합의 원소를 추가하고, 그 때마다 집합의 원소들을 출력하라 (난이도 상)

 * 작성자: 김영재

 * 날짜: 2025.07.17
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int arr[10];

	int i, j;
	for (i = 0; i < 10; i++)
	{
		printf("배열에 추가할 원소? ");
		scanf("%d", &arr[i]);

		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[j]);
		}
		printf("\n");
	}
}