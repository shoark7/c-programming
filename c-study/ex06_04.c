/* Ex06_04.c */
// 매개변수 개수를 맞추는 함수 만들기

#include <stdio.h>

float GetMax(float a, float b, float c)
{
	float max;
	max = a > b? a : b;
	max = max > c ? max : c;

	return max;
}

int main(void)
{
	float x, y, z;
	float result;

	printf("세 개의 실수를 입력하세요. : ");
	scanf("%f %f %f", &x, &y, &z);
	result = GetMax(x, y, z);
	printf("result = %f\n", result);

	return 0;
}
