/* 파일명: assign04.c

 * 내용: PA04. 특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소 중 최대값을 가진 원소와 최소값을 가진 원소를 찾아서 
               인덱스와 값을 함께 출력하는 프로그램을 작성하라, 배열의 초기값은 마음대로 정하라 (난이도 중)

 * 작성자: 김영재

 * 날짜: 2025.09.16
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 10

void Print(void);
void find_MinMax(int arr[], int size, int* max, int* min, int* maxidx, int* minidx);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[ARR_SIZE] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
    int max, min, maxidx, minidx;

    printf("배열: ");

    int i;
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", arr[i]);
    }

    find_MinMax(arr, ARR_SIZE, &max, &min, &maxidx, &minidx);

    printf("최댓값: 인덱스 = %d, 값 = %d\n", maxidx, max);
    printf("최솟값: 인덱스 = %d, 값 = %d\n", minidx, min);
}

void find_MinMax(int arr[], int size, int* max, int* min, int* maxidx, int* minidx)
{
    *max = arr[0];
    *min = arr[0];
    *maxidx = 0;
    *minidx = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
            *maxidx = i;
        }
        if (arr[i] < *min)
        {
            *min = arr[i];
            *minidx = i;
        }
    }
    printf("\n");
}