/* Ex09_01.c */
// student 구조체 정의해보기

#include <stdio.h>
#include <string.h>

struct student {
	int korean, english, math;
	char name[20];
	double average;
};

int main(void)
{
	struct student s1;
	struct student s2 = {90, 70, 89, "김국수"};

	s1.korean = 90;
	s1.english = 50;
	s1.math = 60;
	strcpy(s1.name, "김치먹고싶어");
	s1.average = (double)(s1.english + s1.math + s1.korean) / 3;
	s2.average = (double)(s2.english + s2.math + s2.korean) / 3;

	printf("%s = %5.2f\n", s1.name, s1.average);
	printf("%s = %5.2f\n", s2.name, s2.average);

	return 0;
}
