/* Ex07_07.c */
// 문자 배열 선언하고 사용해보기
#include <stdio.h>

int main(void)
{
	char str1[4] = "abc";
	char str2[10] = "12345";
	char str3[] = "Hello world";

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	printf("str3 = %s\n", str3);

	return 0;
}
