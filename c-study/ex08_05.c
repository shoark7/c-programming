/* Ex08_05.c */
// 포인터로서 배열의 사용 예

#include <stdio.h>

int main(void)
{
	int arr[5] = {10, 20, 30, 40, 50};
	int i;

	for(i = 0; i < 5; i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
		printf("arr + %d = %p\n", i, arr + i);
	}

	for(i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
		printf("*(arr + %d) = %d\n", i, *(arr + i));
	}

	return 0;
}
