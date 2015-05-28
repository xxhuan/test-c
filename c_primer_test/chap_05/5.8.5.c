#include <stdio.h>

int is_leapyear(int year)
{
	return ( ( year%100==0 ) ? ( year%400==0?1:0 ):(year%4==0?1:0) );
}

int main()
{
	int year = 0;

	int a = 5;

	if( 10 >= a >= 1 )
		printf("in range\n");
	else
		printf("out of range\n");
/*
	while(1)
	{
		printf("input a year:");
		scanf("%d",&year);
		printf("%d  %d\n",year,is_leapyear(year));
	}
*/	return 0;
}

