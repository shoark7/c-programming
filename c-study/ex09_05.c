/* Ex09_05.c */
#include <stdio.h>
#include <math.h>

struct point {
	int x, y;
};

double get_distance(struct point *p1, struct point *p2);

int main(void)
{
	struct point p1 = {0, 0};
	struct point p2 = {10, 10};
	double distance;

	distance = get_distance(&p1, &p2);
	printf("두 점 사이의 거리 : %f\n", distance);

	return 0;
}

double get_distance(struct point *p1, struct point *p2)
{
	int dx = p2->x - p1->x;
	int dy = p2->y - p1->y;

	return sqrt(dx*dx + dy*dy);
}
