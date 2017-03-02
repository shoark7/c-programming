/* Ex03_03.c */
#include <stdio.h>

int main(void) {
	char grade = '\x41';
	int data = 0x7b;
	unsigned int age = 75u;
	int fileSize = 1234567;
	double area = 1234.35;
	double taxRate = 25e-2;
	float temperature = 17.5f;

	printf("grade = %c\n", grade);
	printf("data  = %d, %o, %x\n", data, data, data);
	printf("age   = %u\n", age);
	printf("fileSize = %d\n", fileSize);
	printf("area  = %f, %e, %g\n", area, area, area);
	printf("taxRate = %f\n", taxRate);
	printf("temperature = %f\n", temperature);

	return 0;
}
