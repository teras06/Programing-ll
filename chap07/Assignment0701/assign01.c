/* ���ϸ�: assign01.c

 * ����: PA01. ���������� �տ� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴� ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
               ù ��° ���� ���� ����(common difference)�� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��϶� (���̵� ��)

 * �ۼ���: �迵��

 * ��¥: 2025.09.16
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

    printf("ù ��° ��? ");
    scanf("%d", &a);
    printf("����? ");
    scanf("%d", &d);

    fillcd(result, ARR_SIZE, a, d);

    printf("��������: ");
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