/* Ex07_09.c */
// strlen 함수 사용해보기
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "abcde";
	char str2[10] = "";

	printf("str1의 길이 : %d\n", strlen(str1));
	printf("str2의 길이 : %d\n", strlen(str2));
	printf("\"Hello world\"의 길이 : %d\n", strlen("Hello world"));

	return 0;
}
