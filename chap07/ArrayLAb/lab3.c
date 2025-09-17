/* 파일명: lab3.c

 * 내용: 배열 범위 중 최소값 찾는 함수 int findMinint(int R[], int from, int to);,
         배열의 두 원소를 교환 void swapint(int R[], int aindex, int bindex);,
         두 함수를 구현하고, 이를 활용한 선택정렬 함수를 구현 int selectionSortint(int R[], int length);
         테스트 코드 int test_selectionSortint(void);

 * 작성자: 김영재

 * 날짜: 2025.09.16
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findMinint(int R[], int from, int to);
void swapint(int R[], int aindex, int bindex);
int selectionSortint(int R[], int length);
int test_selectionSortint(void);

int main()
{
    test_selectionSortint();

    return 0;
}

int findMinint(int R[], int from, int to)
{
    int min = from;

    int i;
    for (i = from + 1; i <= to; i++)
    {
        if (R[min] > R[i])
        {
            min = i;
        }
    }

    return min;
}


void swapint(int R[], int aindex, int bindex)
{
    int temp = R[aindex];
    R[aindex] = R[bindex];
    R[bindex] = temp;
}


int selectionSortint(int R[], int length)
{
    int i;
    for (i = 0; i < length - 1; i++)
    {
        int minIndex = findMinint(R, i, length - 1);

        if (i != minIndex)
        {
            swapint(R, i, minIndex);
        }
    }

    return 0;
}


int test_selectionSortint(void)
{
    int arr[] = { 3, 5, 1, 7, 9 };
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("정렬 전: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSortint(arr, length);

    printf("정렬 후: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// 실패 시 0이 아닌수 = 실패를 어떻게 판단하는지?