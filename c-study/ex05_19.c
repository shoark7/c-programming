/* Ex05_19.c */
// goto 사용해보기

#include <stdio.h>

int main(void)
{
	int i;

	for(i = 1; i <= 10; i++)
	{
		if( i % 2 == 0 )
			goto exit;
		printf("%d", i);
	}
exit:
	printf("Ended\n");

}
