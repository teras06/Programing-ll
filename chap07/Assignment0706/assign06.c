/* 파일명: assign06.c

 * 내용: PA06. 크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램을 작성하라
               실수형 배열의 초기값은 마음대로 정하라 (난이도 하)

 * 작성자: 김영재

 * 날짜: 2025.09.16
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
void reverse_arr(double arr[], int size);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    double arr[] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("배열: ");

    int i;
    for (i = 0; i < size; i++)
    {
        printf("%.1lf ", arr[i]);
    }

    reverse_arr(arr, size);

    printf("역순: ");

    for (i = 0; i < size; i++)
    {
        printf("%.1lf ", arr[i]);
    }
}

void reverse_arr(double arr[], int size)
{
    double temp;

    int i;
    for (i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    printf("\n");
}