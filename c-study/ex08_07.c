/* Ex08_07.c */
// 문자열 리터럴의 의미

#include <stdio.h>
#include <string.h>

int main(void)
{
	char *p = "abcde"; // 문자열 리터럴은 실제로는 문자열의 주소

	printf("p = %s\n", p);
	printf("p = %p\n", p);
	printf("p = %p\n", "abcde");

	p[0] = 'A';
	strcpy(p, "hello"); // 위 두 줄은 실행에러. 문자열 리터럴은 수정 불가

	return 0;
}
