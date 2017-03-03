/* Ex04_13.c */
// 연산자의 우선순위와 결합방향 테스트!

#include <stdio.h>

int main(void)
{
	int a = 1, b = 2, c = 3;
	int result;

	result = a + b * c % 2;
	printf("I think answer is 1\n");
	printf("result = %d\n\n", result);

	result = a > b || c > 0;
	printf("I think answer is 0\n");
	printf("result = %d\n\n", result);

	result = a > b || c > 0 && b > c;
	printf("I thinks answer is 0\n");
	printf("result = %d\n\n", result);

	result = ++a * b--;
	printf("I thinks answer is 4\n");
	printf("result = %d\n\n", result);

	result = a = b = c;
	printf("I think answer is 3\n");
	printf("result = %d\n\n", result);

	return 0;
}
