/* ���ϸ�: lab3.c

 * ����: �迭 ���� �� �ּҰ� ã�� �Լ� int findMinint(int R[], int from, int to);,
         �迭�� �� ���Ҹ� ��ȯ void swapint(int R[], int aindex, int bindex);,
         �� �Լ��� �����ϰ�, �̸� Ȱ���� �������� �Լ��� ���� int selectionSortint(int R[], int length);
         �׽�Ʈ �ڵ� int test_selectionSortint(void);

 * �ۼ���: �迵��

 * ��¥: 2025.09.16
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

    printf("���� ��: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSortint(arr, length);

    printf("���� ��: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// ���� �� 0�� �ƴѼ� = ���и� ��� �Ǵ��ϴ���?