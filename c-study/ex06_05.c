/* Ex06_05.c */
// 함수를 선언하는 위치에 대한 생각

#include <stdio.h>

int main(void)
{
	int i_res;
	float f_res;

	i_res = GetFactorial(5);
	printf("5! = %d\n", i_res);

	f_res = GetMax(0.5, 10.5, 12.5);
	printf("최대값 = %f\n", f_res);

	return 0;
}

int GetFactorial(int num)
{
	int i, fact = 1;
	for( i = 1; i <= num; i++ )
	{
		fact *= i;
	}
	return fact;
}

float GetMax(float a, float b, float c)
{
	float max;
	max = a > b ? a : b;
	max = max > c ? max : c;

	return max;
}
