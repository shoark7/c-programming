/* Ex05_17.c */
// break을 사용해 무한루프 속에서 숫자 계속 더하기

#include <stdio.h>

int main(void)
{
	int num, sum;
	int i;

	while( 1 )
	{
		printf("숫자를 입력하세요.(-1 입력시 종료)");
		scanf("%d", &num);

		if( num == -1 )
		{
			break;
		}

		sum = 0;

		for( i = 1; i <= num; i++ )
		{
			sum += i;
		}
		printf("1부터 %d까지의 합계 : %d\n", num, sum);
	}

	return 0;
}
