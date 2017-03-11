/* Ex07_11.c */
// strcat 함수 사용해보기
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20] = "abcde";
	strcat(str, "12345");

	printf("str is %s\n", str);

	return 0;
}
