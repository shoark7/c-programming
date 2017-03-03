/* Ex04_08.c */
// 대입 연산자 사용하기

#include <stdio.h>
int main(void)
{
	int num;

	num = 5;
	printf("num = %d\n", num);

	num += 2;
	printf("num = %d\n", num);

	num *= 2;
	printf("num = %d\n", num);

	num |= 3;
	printf("num = %d\n", num);

	num <<= 2;
	printf("num = %d\n", num);

	return 0;
}
