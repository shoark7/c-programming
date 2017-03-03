/* Ex04_02.c */
// 나머지 연산자 활용하기.
// 6자리 정수를 입력 받아 ','를 넣어주기

#include <stdio.h>

int main(void) {
	int num;
	int thousands, tens;

	printf("6자리 정수를 입력하세요 : ");
	scanf("%d", &num);

	thousands = num / 1000;
	tens = num % 1000;
	printf("%d,%d\n", thousands, tens);

	return 0;
}
