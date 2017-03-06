/* Ex06_02.c */
//매개변수를 갖는 함수 만들기

#include <stdio.h>

void print_sum_product(int a, int b)
{
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d * %d = %d\n", a, b, a * b);
}

int main(void)
{
	int x, y;
	print_sum_product(10, 20);

	printf("정수를 두 개 입력하세요. : ");
	scanf("%d %d", &x, &y);
	print_sum_product(x, y);

	return 0;
}
