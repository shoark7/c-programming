/* Ex05_18.c */
// continue를 사용해 1부터 10사이의 홀수만 출력하기.

#include <stdio.h>

int main(void)
{
	int i;

	for( i = 1; i <= 10; i++ )
	{
		if( i % 2 == 0 )
		{
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");

	return 0;
}
