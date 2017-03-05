/* Ex05_05.c */
// switch를 활용해 초간단한 계산기를 만들자.
#include <stdio.h>

int main(void)
{
	int a, b;
	char op;

	printf("수식을 입력하세요 : ");
	scanf("%d %c %d", &a, &op, &b);

	switch( op )
	{
		case '+':
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		case '-':
			printf("%d - %d = %d\n", a, b, a - b);
			break;
		case '*':
			printf("%d * %d = %d\n", a, b,a * b);
			break;
		case '/':
			printf("%d / %d = %d\n", a, b, a/b);
			break;
		default:
			printf("계산할 수 없습니다.");
			break;
	}

	return 0;
}
