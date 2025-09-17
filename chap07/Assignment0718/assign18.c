/* ���ϸ�: assign18.c

 * ����: PA18. ���п��� ����(set)�� ��������(multiset)�� �ٸ��� ������ �ߺ��� ������� �ʴ´� �ִ� 10���� ������ ���Ҹ� ������ �� �ִ� ����(set)�� �����϶�
			   ������ �Է¹޾� ������ ���ҷ� �߰��ϰ�, �� ������ ������ ���ҵ��� ����϶� (���̵� ��)

 * �ۼ���: �迵��

 * ��¥: 2025.09.16
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);
int inspection(int arr[], int num); // �ߺ� ���� ����

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	int arr[10];

	int i = 0;
	int j;
	while (i < 10)
	{
		printf("�迭�� �߰��� ����? ");
		scanf("%d", &arr[i]);

		int index = inspection(arr, i);

		if (index != -1)
		{
			printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", index);

			for (j = 0; j < i; j++)
			{
				printf("%d ", arr[j]);
			}
			printf("\n");
			continue;
		}

		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[j]);
		}
		printf("\n");
		i++;
	}
}

int inspection(int arr[], int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		if (arr[i] == arr[num])
		{
			return i;
		}
	}
	return -1;
}