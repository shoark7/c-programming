#include <stdio.h>

struct test{
		char ch;
		char ok;
		short s;
		int i;
		double d;
};

union test2 {
	unsigned long longboy;
	unsigned char name[4];
};

int main(void) {
	printf("union의 크기 : %d\n", sizeof(union test2));
	return 0;
}
