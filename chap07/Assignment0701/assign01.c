/* 파일명: assign01.c

 * 내용: PA01. 등차수열은 앞에 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다 크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우려고 한다.
               첫 번째 항의 값과 공차(common difference)를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하라 (난이도 하)

 * 작성자: 김영재

 * 날짜: 2025.09.16
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 10

void Print(void);
void fillcd(int arr[], int size, int start, int diff);
void int_print_arr(int arr[], int size);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int result[ARR_SIZE] = { 0 };
    int a, d;

    printf("첫 번째 항? ");
    scanf("%d", &a);
    printf("공차? ");
    scanf("%d", &d);

    fillcd(result, ARR_SIZE, a, d);

    printf("등차수열: ");
    int_print_arr(result, ARR_SIZE);
}

void int_print_arr(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void fillcd(int arr[], int size, int start, int diff)
{
    int i;

    for (i = 0; i < size; i++)
    {
        arr[i] = start + i * diff;
    }
}