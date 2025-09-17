/* 파일명: assign10.c

 * 내용: PA10. 3 x 3 행렬의 합을 구하는 프로그램을 작성하라, 행렬로 사용될 2차원 배열은 마음대로 초기화해도 된다 (난이도 중)

 * 작성자: 김영재

 * 날짜: 2025.09.16
 */

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#include <stdio.h>

void Print(void);
void add_arr(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE], int arr3[SIZE][SIZE]);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int i, j;
    int arr1[SIZE][SIZE] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int arr2[SIZE][SIZE] = { {10,20,30}, {40,50,60}, {70,80,90} };
    int arr3[SIZE][SIZE];

    printf("x 행렬:\n");
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf(" %d", arr1[i][j]);
        }
        printf("\n");
    }


    printf("y 행렬:\n");
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf(" %d", arr2[i][j]);
        }
        printf("\n");
    }

    add_arr(arr1, arr2, arr3);

    printf("x + y 행렬:\n");

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf(" %d", arr3[i][j]);
        }
        printf("\n");
    }
}

void add_arr(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE], int arr3[SIZE][SIZE])
{
    int i, j;

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}