#include <stdio.h>
#include <stdlib.h>

int add(int a)
{
	int b = 5;
	int c;
	printf("c[%d]\n",c);
	c = a +b;
	printf("c[%d]\n",c);
	
	return c;
}

int main()
{
	int aa = 10;
	int a1 = 0;
	int a2 = 0;

	a1 = add(aa);
	printf("a1[%d]\n",a1);
	a2 = add(a1);

	printf("[%d][%d]\n",a1,a2);

	return 0;
}

