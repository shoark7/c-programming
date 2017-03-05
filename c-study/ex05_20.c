/* Ex05_20.c */
// return으로 함수 종료시키기.

#include <stdio.h>

int main(void)
{
	int i;

	for( i = 1; i <= 10; i++)
	{
		if( i % 2 == 0 )
			return 1;
		printf("%d \n", 1);
	}

	printf("프로그램을 종료합니다.\n");

	return 0;
}
