/* EX_09.c */
#include <stdio.h>

int main(void) {
	float pi1 = 3.141592653589793;
	double pi2 = 3.141592653589793;

	printf("float형의 pi값 : %f\n", pi1);
	printf("double형의 pi값 : %f\n", pi2);


	printf("float형의 pi값 : %30.25f\n", pi1);
	printf("double형의 pi값 : %30.25f\n", pi2);

	return 0;
}
