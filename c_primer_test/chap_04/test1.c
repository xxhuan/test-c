#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	printf("x[%d]\n",x);
	int result =  x > 3;
	int a = 3;
	if(result)
	{
		printf("it is ture!,result [%d]\n",result);
	}
	else
		printf("it is false ,result[%d]\n",result);
	
	printf("x[%d]\n",x);

	switch(a)
	{
		case 0: printf("0[%d]\n",a); break;
		case 1: printf("1[%d]\n",a); break;
		default: printf("default[%d]\n",a);break;
		case 2: printf("2[%d]\n",a); break;
		case 3: printf("3[%d]\n",a); break;
	}
	return 0;
}

