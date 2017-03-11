/* Ex07_10.c */
// strcmp 함수 사용해보기

// strcmp 함수는 문자열이 같으면 0,
// 첫 번째 인자가 더 크면 0보다 큰 값, 반대면 0보다 작은 값을 출력한다.

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20] = "ABCDE";

	strcpy(str1, "abcde");

	if( strcmp(str1, "abcde") == 0)
	{
		printf("두 문자열이 같습니다.\n");
	}
	else
	{
		printf("두 문자열이 다릅니다.\n");
	}

	if( strcmp(str1, str2) == 0)
	{
		printf("두 문장이 같습니다.\n");
	}
	else
	{
		printf("%d", strcmp(str1, str2));
		printf("두 문자열이 다릅니다.\n");
	}

	return 0;
}
