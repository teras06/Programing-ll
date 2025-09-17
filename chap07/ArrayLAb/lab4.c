/* ���ϸ�: lab4.c

 * ����: �տ��� ������ selectionSortint �Լ��� �Ǽ��� ������ �� �ֵ��� selectionSortFloat �Լ��� �����Ͻÿ�
         ǥ�� ���̺귯�� qsort �Լ��� �̿��Ͽ� �Ǽ� �迭�� ���� ������ �ϵ��� �Ͻÿ� < ����
         �տ��� ������ selectionSortint �Լ��� �̿��Ͽ� qsort ó�� ������ �迭�� ���� ������ �� �ֵ��� �����Ͻÿ� < ����
         ǥ�� ���̺귯���� qsort �Լ��� �̿��Ͽ� ����ó ����ü Ÿ�Կ� ���� �����ϴ� ���� �ڵ带 �ۼ��Ͻÿ� < ����

 * �ۼ���: �迵��

 * ��¥: 2025.09.16
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findMinint(int R[], int from, int to);
void swapint(int R[], int aindex, int bindex);
int selectionSortint(int R[], int length);

int findMinFloat(float R[], int from, int to);
void swapFloat(float R[], int aindex, int bindex);
int selectionSortFloat(float R[], int length);

int main()
{
    ();

    return 0;
}


int findMinint(int R[], int from, int to) //�ּҰ� int
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


void swapint(int R[], int aindex, int bindex) //��ȯ int
{
    int temp = R[aindex];
    R[aindex] = R[bindex];
    R[bindex] = temp;
}


int selectionSortint(int R[], int length) //�������� int
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


int findMinFloat(float R[], int from, int to) //�ּҰ� float
{
    int minIndex = from;

    int i;
    for (i = from + 1; i <= to; i++)
    {
        if (R[i] < R[minIndex])
        {
            minIndex = i;
        }
    }
    return minIndex;
}


void swapFloat(float R[], int aindex, int bindex) //��ȯ float
{
    float temp = R[aindex];
    R[aindex] = R[bindex];
    R[bindex] = temp;
}


int selectionSortFloat(float R[], int length) //�������� float
{
    int i;
    for (i = 0; i < length - 1; i++)
    {
        int minIndex = findMinFloat(R, i, length - 1);
        if (i != minIndex)
        {
            swapFloat(R, i, minIndex);
        }
    }

    return 0;
}