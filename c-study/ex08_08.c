/* Ex08_08.c */
// 문자열 포인터의 변경

#include <stdio.h>
#include <string.h>

int main(void)
{
	char *p = "abcde";

	printf("p = %s\n", p);
	printf("p = %p\n", p);
	printf("p = %p\n", "abcde");

	p = "hello"; // 가리키는 문자열 자체를 바꿨다.

	printf("p = %s\n", p);
	printf("p = %p\n", p);
	printf("p = %p\n", "hello");

	return 0;
}
