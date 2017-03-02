/* Ex03_10.c */
// Overflow and underflow in float datatype.

#include <stdio.h>

int main(void) {

	float num1 = 3.5e39;
	float num2 = 1.8e-39;

	printf("num1 = %30.25f\n", num1);
	printf("num2 = %30.25f\n", num2);

	return 0;
}
