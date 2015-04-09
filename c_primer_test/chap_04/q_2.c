#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i = 0;
	int num;
	int div;

	for(i=1;i<=100;i++)
	{
		for(div=2;div<i;div++)
		{
			if(i%div == 0)
				break;
		}

		if( div >= i )
			printf("[%d]\n",i);
	}

	return 0;
}
