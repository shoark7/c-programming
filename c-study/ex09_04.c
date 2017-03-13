/* Ex09_04.c */
#include <stdio.h>

#define MAX_STUDENT 1

struct student {
	char name[20];
	int korean, english, math;
	double average;
};

int main(void)
{
	struct student std[MAX_STUDENT];
	int i;
	double total_average = 0;

	printf("%d명의 학생 정보를 입력하세요.\n", MAX_STUDENT);
	
	for(i = 0; i < MAX_STUDENT; i++)
	{
		printf("이름 : ");
		scanf("%s", std[i].name);
		printf("국어, 영어, 수학 점수 : ");
		scanf("%d %d %d",
			&std[i].korean, &std[i].english, &std[i].math);
		std[i].average = (double)
				(std[i].korean + std[i].math + std[i].english) / 3;
		total_average += std[i].average;
	}

	total_average /= MAX_STUDENT;

	printf("\n이름	국어 영어 수학 평균\n");
	for(i = 0; i < MAX_STUDENT; i++)
	{
		printf("%-10s %3d %3d %3d %6.2f\n",
			std[i].name, std[i].korean, std[i].english, std[i].math);
	}

	printf("전체 평균 : %6.2f\n", total_average);

	return 0;
}
