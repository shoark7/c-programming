/* Ex05_16.c */
// break문을 사용해 반복문을 빠져나와 보자.

#include <stdio.h>

int main(void)
{
	int i;

	for( i = 1; i < 10; i++ )
	{
		if( i % 2 == 0 )
		{
			break;
		}
		printf("%d ", i);
	}
	printf("\n");
}
