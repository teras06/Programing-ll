/* 파일명: assign14.c

 * 내용: PA14. 음악 재생 프로그램에는 재생 목록에 있는 곡들을 임의의 순서로 뒤섞는 셔플 기능이 있다
			   이 셔플 기능처럼 크기가 10인 정수형 배열의 원소를 임의의 순서로 뒤섞는 프로그램을 작성하라
			   크기가 10인 정수형 배열은 0~99사이의 임의의 정수로 채워서 테스트한다 (난이도 상)

 * 작성자: 김영재

 * 날짜: 2025.09.16
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Print(void);
void shuffle(int arr[], int size);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int i;
	int arr[10];

	srand((unsigned int)time(0));

	printf("셔플 전:");

	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100;

		printf(" %2d", arr[i]);
	}

	shuffle(arr, 10);

	printf("셔플 후:");
	for (i = 0; i < 10; i++)
	{
		printf(" %2d", arr[i]);
	}
}

void shuffle(int arr[], int size)
{
	int i;
	for (i = size - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);

		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	printf("\n");
}