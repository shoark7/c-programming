/* Ex02_02.c */
#include <stdio.h>

int main(void) {
	float num;
	int i_part;
	float f_part;

	printf("실수를 입력하세요 : ");
	scanf("%f", &num);

	i_part = num;
	f_part = num - i_part;

	printf("%f의 정수 부분은 %d이고, 실수 부분은 %f입니다.", num, i_part, f_part);

	return 0;
}
