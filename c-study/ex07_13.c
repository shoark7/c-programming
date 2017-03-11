/* Ex07_13.c */
// gets, puts 함수 써보기
#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[20];
	char msg[40];

	printf("이름을 입력하세요. : ");
	fgets(name, strlen(name), stdin);

	sprintf(msg, "%s씨, 안녕하세요?", name);
	puts(msg);

	return 0;
}
