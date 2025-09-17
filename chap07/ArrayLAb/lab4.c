/* 파일명: lab4.c

 * 내용: 앞에서 구현한 selectionSortint 함수를 실수에 적용할 수 있도록 selectionSortFloat 함수로 구현하시오
         표준 라이브러리 qsort 함수를 이용하여 실수 배열에 대한 정렬을 하도록 하시오 < 질문
         앞에서 구현한 selectionSortint 함수를 이용하여 qsort 처럼 임의의 배열에 대해 정렬할 수 있도록 변경하시오 < 질문
         표준 라이브러리의 qsort 함수를 이용하여 연락처 구조체 타입에 대한 정렬하는 예시 코드를 작성하시오 < 질문

 * 작성자: 김영재

 * 날짜: 2025.09.16
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


int findMinint(int R[], int from, int to) //최소값 int
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


void swapint(int R[], int aindex, int bindex) //교환 int
{
    int temp = R[aindex];
    R[aindex] = R[bindex];
    R[bindex] = temp;
}


int selectionSortint(int R[], int length) //선택정렬 int
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


int findMinFloat(float R[], int from, int to) //최소값 float
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


void swapFloat(float R[], int aindex, int bindex) //교환 float
{
    float temp = R[aindex];
    R[aindex] = R[bindex];
    R[bindex] = temp;
}


int selectionSortFloat(float R[], int length) //선택정렬 float
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