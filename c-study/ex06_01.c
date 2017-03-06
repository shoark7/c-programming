/* Ex06_01.c */
// 함수를 사용해보자.

#include <stdio.h>

void print_hello(void)
{
	printf("Hello world!\n");
}

void printf_line(void)
{
	int i;
	for( i = 1; i <= 20; i++ )
	{
		printf("-");
	}
	printf("\n");
}


int main(void)
{
	print_hello();
	printf_line();
	print_hello();

	return 0;
}


