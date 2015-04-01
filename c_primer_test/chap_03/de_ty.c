#include <stdio.h>
#include <stdlib.h>

#define d_ptr char *

typedef  char * t_ptr;

int aa;

int main()
{
	d_ptr a,b;
	t_ptr c,d;
	int aaa;	
	aa = 1;
	aaa = 10;
	{
		printf("a [%d]\n",aa);
		int aa = 10;
		printf("a [%d]\n",aa);
	}

	{
		int a = 12;
	}
	printf("a [%d]\n",a);
	return 0;
}


