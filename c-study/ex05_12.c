/* Ex05_12.c */
// while로 1부터 10까지의 합, 곱 표현하기

#include <stdio.h>

int main(void)
{
	int i = 1;
	int sum = 0, factorial = 1;

	while( i < 11 )
	{
		sum += i;
		factorial *= i;

		i++;
	}

	printf("1부터 10까지의 합은 %d, 곱은 %d입니다.\n", sum, factorial);
}
