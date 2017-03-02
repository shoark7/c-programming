/* Ex03_05.c */
#include <stdio.h>

int main(void) {
	char ch;

	printf("글자를 하나 입력하세요. : \n");
	scanf("%c", &ch);

	printf("%c 문자의 ASCII 코드 : %d(%x)\n", ch, ch, ch);

	return 0;
}
