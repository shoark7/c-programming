/* Ex06_11.c */
// 전역 변수 선언하는 위치의 중요성
#include <stdio.h>

void PrintCount(void);
void Increment(void);
void Decrement(void);


int main(void)
{
	count = 0;

	PrintCount();
	Increment();
	Increment();
	PrintCount();

	Decrement();
	PrintCount();

	return 0;
}

int count; // 전역변수 count는 main에서 쓰이고 있지만 선언은 여기서 했다.

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
