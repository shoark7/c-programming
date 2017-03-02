/* Ex03_11.c */
// Get size of each datatype by sizeof

#include <stdio.h>

int main(void) {
	char ch;
	int num;
	double fnum;

	printf("ch  의 바이트 크기 : %d\n", sizeof ch);
	printf("num 의 바이트 크기 : %d\n", sizeof num);
	printf("fnum의 바이트 크기 : %d\n", sizeof fnum);

	printf("3.14f의 바이트 크기 : %d\n", sizeof 3.14f);
	printf("3.14 의 바이트 크기 : %d\n", sizeof 3.14);

	printf("char  형의 바이트 크기 : %d\n", sizeof(char));
	printf("short 형의 바이트 크기 : %d\n", sizeof(short));
	printf("int   형의 바이트 크기 : %d\n", sizeof(int));
	printf("long  형의 바이트 크기 : %d\n", sizeof(long));
	printf("float 형의 바이트 크기 : %d\n", sizeof(float));
	printf("double형의 바이트 크기 : %d\n", sizeof(double));

	return 0;
}
