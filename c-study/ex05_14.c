/* Ex05_14.c */
// while을 사용해 무한루프 구구단을 출력하자.

#include <stdio.h>

int main(void)
{
	int num;
	int i;

	while( 1 )
	{
		printf("정수를 입력하세요. : ");
		scanf("%d", &num);

		for( i = 1; i < 10; i++ )
		{
			printf("  %d * %d = %d", num, i, num * i);
		}
		printf("\n");
	}

	return 0;
}
