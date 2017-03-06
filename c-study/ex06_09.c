/* Ex06_09.c */
//같은 함수를 여러 번 호출하면 변수는 어떻게 될까

#include <stdio.h>

void TestLocal(void);

int main(void)
{
	TestLocal();
	TestLocal();
}

void TestLocal(void)
{
	int num = 0;

	printf("num = %d\n", num++);
}
