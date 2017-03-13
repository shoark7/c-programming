/* Ex09_03.c */
// 구조체 간의 초기화 및 대입

#include <stdio.h>

struct point {
	int x, y;
};

int main(void)
{
	struct point p1 = {10, 20};
	struct point p2 = {30, 40};

	struct point p3 = p1;
	struct point p4;

	p4 = p2;

	p1.x = 5;
	p2.x = 15;
	// p1.x의 값을 바꾸면 p3.x도 값이 변할까??
	
	if (p3.x == 5)
		printf("copy by value가 아닌가? 값이 같이 변했음.\n");
	else if (p3.x == 10)
		printf("copy by value. 값이 그대로.");
	else
		printf("?? 대체 뭐임");

	return 0;
}
