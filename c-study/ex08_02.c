/* Ex08_02.c */
// 포인터 변수 만들고 사용해보기
#include <stdio.h>

int main(void)
{
	int x;
	int *p;

	p = &x;
	*p = 10;

	printf("*p = %d\n", *p);
	printf("x = %d\n", x);

	printf("p = %p\n", p);
	printf("&x = %p\n", &x);

	printf("&p = %p\n", &p);

	return 0;
}
