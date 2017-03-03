/* Ex04_12.c */
// 명시적인 형 변환 example.

#include <stdio.h>

int main(void)
{
	int num;
	float f;

	f = 10 / 3;
	printf("f is %f\n", f);

	f = (float) 10 / 3;
	printf("f = %f\n", f);

	f = (float) 10 / (float) 3;
	printf("f = %f\n", f);

	num = (int)(12.5 + 10.7);
	printf("num is %d\n", num);

	num = (int)(12.5) + (int)(10.7);
	printf("num is %d\n", num);
}
