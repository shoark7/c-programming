/* Ex05_04.c */
// input validation

#include <stdio.h>

int main(void)
{
	int score;
	char grade;

	printf("성적을 입력하세요. : ");
	scanf("%d", &score);

	if( score < 0 || score > 100 )
	{
		printf("성적은 0과 100사이의 값만을 가질 수 있습니다.\n");
	}
	else
	{
		if( score >= 90 )
		{
			grade = 'A';
		}
		else if ( score >= 80 )
		{
			grade = 'B';
		}
		else if ( score >= 70 )
		{
			grade = 'C';
		}
		else if ( score >= 60 )
		{
			grade = 'D';
		}
		else
		{
			grade = 'F';
		}
		printf("당신의 학점은 %c입니다.\n", grade);
	}

	return 0;
}
