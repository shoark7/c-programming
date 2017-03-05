/*  Ex05_13.c */
// while을 사용해 지속성 있는 계산기 만들기

#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;
	char op = 'a';


	while( a != 0 || op != '0' || b != 0 )
	{
		printf("연산식을 입력하세요. : ");
		scanf("%d %c %d", &a, &op, &b);

		switch( op )
		{
			case '+':
				printf("%d + %d = %d", a, b, a + b);
				break;
			case '-':
				printf("%d - %d = %d", a, b, a - b);
				break;
			case '*':
				printf("%d * %d = %d", a, b, a * b);
				break;
			case '/':
				printf("%d / %d = %d", a, b, a / b);
				break;
			default:
				break;
		}
		printf("\n");
	}
}
