#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int b;
	int c;
	int temp;

	printf("please input the lengths of the three sides of the triangle:");
	scanf("%d,%d,%d",&a,&b,&c);
	
	if( a < b )
	{
		temp = a;
		a = b;
		b = temp;
	}
	if( a < c )
	{
		temp = a;
		a = c;
		c = temp;
	}
	if( b < c )
	{
		temp = b;
		b = c;
		c = temp;
	}

	if( c <= 0 || b + c < a)
		printf("not a triangle!\n");
	else if( a == b && b == c )
		printf("quandeng triangle!\n");
	else if( a == b || b == c )
		printf("dengyao triangle!\n");
	else 
		printf("normal triangle!\n");

	printf("a[%d]b[%d]c[%d]\n",a,b,c);
	return 0;
}

