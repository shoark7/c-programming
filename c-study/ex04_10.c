/* Ex04_10.c */
// 승진에 의한 형변환 Ex04_10

#include <stdio.h>

int main(void)
{
	short a = 500;
	short b = 800;
	short c;

	printf("a * b = %d\n", a * b); // 형 변환 발생

	c = a * b; // 오버 플로우 발생
	printf("c = %d\n", c);

	return 0;
}
