/* Ex05_15.c */
// do while를 사용해 1부터 9까지 출력하기

#include <stdio.h>

int main(void)
{
	int i = 1;

	do {
		printf("%d ", i++);
	} while( i < 10 );

	printf("\n");
}
