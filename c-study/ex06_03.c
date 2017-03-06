/* Ex06_03.c */
// 인자와 리턴값 모두 갖는 함수 만들기

#include <stdio.h>

int GetFactorial(int num)
{
	int i, fact = 1;
	for( i = 1; i <= num; i++)
	{
		fact *= i;
	}
	return fact;
}

int GetSum(int num)
{
	int i;
	int sum = 0;

	for( i = 1; i <= num; i++ )
	{
		sum += i;
	}

	return sum;
}

int main(void)
{
	int result1, result2;

	result1 = GetFactorial(10);
	printf("10! = %d\n", result1);

	result2 = GetSum(10);
	printf("1~10까지의 합계 : %d\n", result2);

	return 0;
}
