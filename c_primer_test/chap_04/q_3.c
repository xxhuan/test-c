#include <stdio.h>
#include <stdlib.h>

int sort_tri(int a[])
{
	int i = 0;
	int j = 0;
	int temp = 0;

	if(a[2] < a[1])
	{
		temp = a[2];
		a[2] = a[1];
		a[1] = temp;
	}
	if(a[2] < a[0])
	{
		temp = a[2];
		a[2] = a[0];
		a[0] = temp;
	}
	if(a[1] < a[0])
	{
		temp = a[1];
		a[1] = a[0];
		a[0] = temp;
	}
	printf("sorted [%d][%d][%d]\n",a[0],a[1],a[2]);
	
	return 0;
}

int judge_tri(int a[])
{
	sort_tri(a);
	
	if( a[0] + a[1] <= a[2] )
	{
		printf("the three line %d,%d,%d canot create a tri!\n",a[0],a[1],a[2]);
		return -1;
	}

	else if( a[0] == a[1] || a[1] == a[2] )
	{
		if( a[0] == a[2] )
		{
			printf("it is a dengbian_tri,line is %d\n",a[0]);
			return 0;
		}
		else
		{
			printf("it is a dengyao_tir,line is %d,%d,%d\n",a[0],a[1],a[2]);
			return 0;
		}
	}

	else
	{
		printf("it is a normal tri,line is %d,%d,%d\n",a[0],a[1],a[2]);
		return 1;
	}

}

int main()
{
	int a[3];

	while(1)
	{
		a[0] = 0;
		a[1] = 0;
		a[2] = 0;

		printf("please input three line:");
		scanf("%d,%d,%d",&a[0],&a[1],&a[2]);

		judge_tri(a);

	}
	
	return 0;
}

