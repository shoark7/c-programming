/* 최소공약수 알고리즘을 구현해보자.

*/

#include <stdio.h>

int gcd(int, int);

int main(void)
{
	printf("%d와 %d의 최대공약수는 %d\n", 3, 9, gcd(3, 9));
	printf("%d와 %d의 최대공약수는 %d\n", 32, 1922, gcd(32, 1922));
	printf("%d와 %d의 최대공약수는 %d\n", 7, 3, gcd(3, 7));
	printf("%d와 %d의 최대공약수는 %d\n", 12, 30, gcd(30, 12));
	printf("%d와 %d의 최대공약수는 %d\n", 18, 64, gcd(18, 64));
	printf("%d와 %d의 최대공약수는 %d\n", 102, 1281, gcd(102, 1281));

	return 0;
}

int gcd(int a, int b)
{
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	if (b == 0)
		return a;

	return gcd(b, a - b);
}

