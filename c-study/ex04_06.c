/* Ex04_06.c */
#include <stdio.h>

int main(void)
{
	int a = 10; // 0x0a
	int b = 12; // 0x0c;
	int c;

	c = a & b;
	printf("a & b = %08x(%d)\n", c, c);

	c = a | b;
	printf("a | b = %08x(%d)\n", c, c);

	c = a ^ b;
	printf("a ^ b = %08x(%d)\n", c, c);

	c = ~a;
	printf("~a = %08x(%d)\n", c, c);

	return 0;
}
