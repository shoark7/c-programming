/* Ex09_09.c */
// typedef 사용해보기

#include <stdio.h>

struct point {
	int x, y;
};

typedef struct point POINT;

int main(void)
{
	struct point p1 = {10, 20};
	POINT p2;

	p2 = p1;

	printf("p2의 좌표 : %d, %d\n", p2.x, p2.y);

	return 0;
}
