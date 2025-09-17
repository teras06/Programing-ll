/* 파일명: lab2.c

 * 내용: 구조체 타입을 하나 임의로 선언, 구조체 배열에 대한 함수를 구현하고 Test 함수를 작성하여 main에서 실행해 보시오

 * 작성자: 김영재

 * 날짜: 2025.09.16
 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct human {
	char name[20];
	char phone[20];
} HUMAN;

void printArrayContact(HUMAN R[], int size);
void copyArrayContact(HUMAN from[], HUMAN to[], int size);
int test_printArrayContact(void);
int test_copyArrayContact(void);

int main()
{
	test_printArrayContact();
	test_copyArrayContact();

	return 0;
}

void printArrayContact(HUMAN R[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%s %s ", R[i].name, R[i].phone);
	}
	printf("\n");
}

void copyArrayContact(HUMAN from[], HUMAN to[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		to[i] = from[i];
	}
}

int test_printArrayContact(void)
{
	HUMAN a[] = { {"김영재", "010-1234-5678" }, { "김재연", "010-2345-6789" } };

	int size = sizeof(a) / sizeof(a[0]);

	printArrayContact(a, size);

	return 0;
}

int test_copyArrayContact(void)
{
	HUMAN b[] = { { "홍길동", "010-1111-2222" }, { "이순신", "010-3333-4444" } };
	HUMAN c[2];

	int size = sizeof(b) / sizeof(b[0]);

	copyArrayContact(b, c, size);

	printf("c = ");
	printArrayContact(c, size);

	return 0;
}