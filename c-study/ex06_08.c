/* Ex06_08.c */
// 다른 함수에서 같은 변수 이름 사용하기

#include <stdio.h>

void PrintCount(void);

int main(void)
{
	int count = 0;

	printf("main: count = %d\n", count);
	PrintCount();
	return 0;
}

void PrintCount(void)
{
	int count = 100;

	printf("PrintCount: count = %d\n", count);
}
