/* Ex06_13.c */
// 변수의 scope rule을 확인해보자.

#include <stdio.h>

void Test(void);
int num = 10; // 전역변수

int main(void)
{
	int num = 20; // 지역변수

	while (1)
	{
		int num = 30;

		printf("num = %d\n", num); // while안의 지역변수

		if (num > 25)
			break;
	}

	printf("num = %d\n", num);

	Test();

	return 0;
}


void Test(void)
{
	printf("num = %d\n", num);
}
