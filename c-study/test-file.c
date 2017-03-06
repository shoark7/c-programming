#include <stdio.h>

int ok(void)
{
	printf("ok");
}

int main(void) {

	printf("hi");

	for(int i = 1; i <= 1; ++i)
	{
		if( i == 1 )
			continue;
		printf("%d ", i);

	}

	printf("\n");
}
