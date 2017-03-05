/* Ex05_10.c */
// 구구단 출력하기

#include <stdio.h>

int main(void)
{
	int i, j;

	for( i = 1; i < 10; i++ )
	{
		for(j = 1; j < 10; j++){
			printf("  %d * %d = %2d", i, j, i * j);
		}
		printf("\n");
	}
	printf("\n");
}
