/* Ex09_02.c */
// point 구조체 만들고 두 점 사이의 거리를 구하는 프로그램을 만들자

#include <stdio.h>
#include <math.h>

struct point {
	int x, y;
};

int main(void)
{
	struct point p1, p2;
	double dist;

	printf("p1의 x, y좌표를 입력하세요. : ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("p2의 x, y좌표를 입력하세요. : ");
	scanf("%d %d", &p2.x, &p2.y);

	dist = sqrt( pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) );

	printf("두 점 사이의 거리 : %f\n", dist);

	return 0;
}
