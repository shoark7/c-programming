/* Ex06_14.c */
// 값에 의한 전달의 한계점을 살펴보자.

#include <stdio.h>

void Swop(int x, int y);

int main(void)
{
	int a = 10;
	int b = 20;

	printf("스왑 전의 a = %d, b = %d\n", a, b);

	Swop(a, b);

	printf("스왑 후의 a = %d, b = %d\n", a, b);

	return 0;
}

void Swop(int x, int y)
{
	int temp;

	temp = y;
	y = x;
	x = temp;
}

