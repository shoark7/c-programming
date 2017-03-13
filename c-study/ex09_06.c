/* Ex09_06.c */
// 비트필드를 사용해 시간 구조체를 만들어보자

#include <stdio.h>

struct time {
	unsigned int sec : 6;
	unsigned int min : 6;
	unsigned int hour : 5;
};

int main(void)
{
	struct time t1;
	printf("time 구조체의 크기 : %d\n", sizeof( struct time ));

	t1.hour = 5;
	t1.min = 30;
	t1.sec = 70;

	printf("%02d:%02d:%02d\n", t1.hour, t1.min, t1.sec);

	return 0;
}
