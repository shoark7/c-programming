/* Ex07_01.c */
// 배열 선언하고 사용해보기
#include <stdio.h>

int main(void)
{
	int arr[5];
	int byteSize = sizeof(arr);
	printf("배열의 바이트 수 : %d\n", byteSize);

	int i;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	for (i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;
}
