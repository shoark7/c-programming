/* Ex06_12.c */
// 전역 변수의 초기값 확인하기
#include <stdio.h>

void PrintCount(void);
void Increment(void);
void Decrement(void);

int count;

int main(void)
{
	Increment();
	PrintCount(); // 전역 변수 count의 초기값을 지정하지 않았다.

	return 0;
}

int count;

void PrintCount(void)
{
	printf("count = %d\n", count);
}

void Increment(void)
{
	count++;
}

void Decrement(void)
{
	count--;
}
