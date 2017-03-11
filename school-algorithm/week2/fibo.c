/* fibonacci 수열을 만들어보자 */

#include <stdio.h>

int fibo(int num);

int main(void)
{
	printf("%d번째 피보나치 수열은 %d\n", 1, fibo(1));
	printf("%d번째 피보나치 수열은 %d\n", 2, fibo(2));
	printf("%d번째 피보나치 수열은 %d\n", 3, fibo(3));
	printf("%d번째 피보나치 수열은 %d\n", 4, fibo(4));
	printf("%d번째 피보나치 수열은 %d\n", 5, fibo(5));
	printf("%d번째 피보나치 수열은 %d\n", 6, fibo(6));
	printf("%d번째 피보나치 수열은 %d\n", 7, fibo(7));
	printf("%d번째 피보나치 수열은 %d\n", 8, fibo(8));
	printf("%d번째 피보나치 수열은 %d\n", 9, fibo(9));
	printf("%d번째 피보나치 수열은 %d\n", 10, fibo(10));

	return 0;
}

int fibo(int num)
{
	if (num <= 2)
		return 1;

	int answer;
	int a = 1, b = 1;

	for (int i = 1; i <= num - 2; i++)
	{
		answer = b + a;
		a = b;
		b = answer;
	}

	return answer;
}
