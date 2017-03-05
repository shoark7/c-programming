/* Ex05_02.c */
// else를 써보자.

#include <stdio.h>

int main(void) {
	int score;

	printf("점수를 입력하세요 : ");
	scanf("%d", &score);

	if( score < 60 ){
		printf("%d점은 불합격입니다.\n", score);
	}
	else {
		printf("%d점은 합격입니다.\n", score);
	}

	return 0;
}
