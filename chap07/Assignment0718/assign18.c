/* 파일명: assign18.c

 * 내용: PA18. 수학에서 집합(set)은 다중집합(multiset)과 다르게 원소의 중복을 허용하지 않는다 최대 10개의 정수형 원소를 저장할 수 있는 집합(set)을 구현하라
			   정수를 입력받아 집합의 원소로 추가하고, 그 때마다 집합의 원소들을 출력하라 (난이도 상)

 * 작성자: 김영재

 * 날짜: 2025.09.16
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
int inspection(int arr[], int num); // 중복 원소 점검

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int arr[10];

	int i = 0;
	int j;
	while (i < 10)
	{
		printf("배열에 추가할 원소? ");
		scanf("%d", &arr[i]);

		int index = inspection(arr, i);

		if (index != -1)
		{
			printf("해당 원소가 이미 [%d]에 존재합니다.\n", index);

			for (j = 0; j < i; j++)
			{
				printf("%d ", arr[j]);
			}
			printf("\n");
			continue;
		}

		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[j]);
		}
		printf("\n");
		i++;
	}
}

int inspection(int arr[], int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		if (arr[i] == arr[num])
		{
			return i;
		}
	}
	return -1;
}