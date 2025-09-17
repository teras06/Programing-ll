/* ���ϸ�: assign10.c

 * ����: PA10. 3 x 3 ����� ���� ���ϴ� ���α׷��� �ۼ��϶�, ��ķ� ���� 2���� �迭�� ������� �ʱ�ȭ�ص� �ȴ� (���̵� ��)

 * �ۼ���: �迵��

 * ��¥: 2025.09.16
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

    printf("x ���:\n");
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf(" %d", arr1[i][j]);
        }
        printf("\n");
    }


    printf("y ���:\n");
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf(" %d", arr2[i][j]);
        }
        printf("\n");
    }

    add_arr(arr1, arr2, arr3);

    printf("x + y ���:\n");

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