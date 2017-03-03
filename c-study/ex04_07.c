/* Ex04_07.c */
// 비트 이동 연산자 활용해보기

#include <stdio.h>

int main(void)
{
	int a = 10; // 0x0a
	int b;

	b = a << 2;
	printf("a << 2 = %08x(%d)\n", b, b);

	b = a >> 2;
	printf("a >> 2 = %08x(%d)\n", b, b);

	return 0;
}
