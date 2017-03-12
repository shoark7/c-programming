/* Ex08_04.c */
// 포인터형에 증감연산자 사용하기
#include <stdio.h>

int main(void)
{
	int arr[5] = {10, 20, 30, 40, 50};
	int *p = arr;
	int i;

	for(i = 0; i < 5; i++, p++)
		printf("%d\n", *p);

	return 0;
}
