/* Ex09_08.c */
// 열거체를 사용해보자

#include <stdio.h>

enum week {sun, mon, tue, wed, thu, fri, sat};

int main(void)
{
	enum week weekday;
	int i;
	weekday = mon;
	i = tue;

	switch(weekday)
	{
		case sun:
			printf("일요일입니다.\n");
			break;
		case mon:
			printf("월요일입니다.\n");
			break;
		case tue:
			printf("화요일입니다.\n");
			break;
		case wed:
			printf("수요일입니다.\n");
			break;
		case thu:
			printf("목요일입니다.\n");
			break;
		case fri:
			printf("금요일입니다.\n");
			break;
		case sat:
			printf("토요일입니다.\n");
			break;
		default:
			printf("난데??");
	}

	printf(" i = %d\n", i);

	return 0;

}
