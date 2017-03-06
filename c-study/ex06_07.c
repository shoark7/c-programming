/* Ex06_07.c */
// 다른 함수에서 쓰인 함수 사용하기

#include <stdio.h>

void PrintCount(void);

int main(void)
{
	int count = 0;

	printf("main: count = %d\n", count);
	return 0;
}

void PrintCount(void)
{
	printf("PrintCount: count = %d\n", count);
}
