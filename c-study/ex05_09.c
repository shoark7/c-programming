/* Ex05_09.c */
// 1부터 9까지 정수의 합과 곱을 출력하기

#include <stdio.h>
int main(void)
{
	int i;
	int sum = 0;
	int mul = 1;

	for( i = 1; i < 10; i++)
	{
		sum += i;
		mul *= i;
	}
	printf("1부터 9까지 합은 %d, 곱은 %d입니다.\n", sum, mul);
}
