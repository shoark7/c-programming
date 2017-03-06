/* Ex06_15.c */
// 값에 의한 전달의 한계 2.

#include <stdio.h>

void GetSumProduct(int a, int b, int sum, int product);

int main(void)
{
	int sum = 0;
	int product = 0;

	GetSumProduct(10, 20, sum, product);

	printf("sum = %d, product = %d\n", sum, product);

	return 0;
}

void GetSumProduct(int a, int b, int sum, int product)
{
	sum = a + b;
	product = a * b;
}
