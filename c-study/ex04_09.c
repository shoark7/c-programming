/* Ex04_09.c */
// 조건 연산자 활용하기

#include <stdio.h>

int main(void)
{
	int a, b;
	int min, max;

	printf("두 개의 정수를 입력하세요. : ");
	scanf("%d %d", &a, &b);

	min = a > b ? b : a;
	max = a > b ? a : b;

	printf("Min value is %d, Max value is %d\n", min, max);

	return 0;
}
