/* Ex07_05.c */
// 선택정렬을 C로 구현하기
#include <stdio.h>

#define SIZE 10

int main(void)
{
	int array[SIZE] = {23, 96, 35, 42, 81, 19, 7, 77, 50, 63};
	int i, j, index;
	int temp;

	for(i = 0; i < SIZE - 1; i++)
	{
		index = i;
		for(j = i + 1; j < SIZE; j++)
		{
			if (array[index] > array[j])
			{
				index = j;
			}
		}
		temp = array[index];
		array[index] = array[i];
		array[i] = temp;
	}

	printf("정렬 결과 : ");
	for(int i = 0; i < SIZE; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}
