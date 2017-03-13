/* Ex09_07.c */
// 공용체 사용해보기

#include <stdio.h>

union data {
	unsigned long dword;
	unsigned char byte[4];
};

int main(void)
{
	union data d1;
	int i;

	printf("공용체의 크기 : %d\n", sizeof(union data));

	d1.dword = 0x12345678;
	printf("d1.word = %08x\n", d1.dword);

	for(i = 0; i < 8; i++)
	{
		printf("d1.byte[%d] = %02x\n", i, d1.byte[i]);
	}

	return 0;
}
