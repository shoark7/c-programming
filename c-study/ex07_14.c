/* Ex07_14.c */
// 문자열 배열 사용해보기
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[3][5];
	int i;

	strcpy(s[0], "abc");
	strcpy(s[1], "cdef");
	strcpy(s[2], "ghi");

	s[2][0] = 'G';
	for (i = 0; i < 3; i++)
	{
		printf("%s 문자열의 길이 : %d\n", s[i], strlen(s[i]));
	}

	return 0;
}
