#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a1 = 1.0;
	float a2 = 1.0;
	float num;
	
	while(1)
	{
	
		printf("please input a num:");
		scanf("%f",&num);
		
		a1 = 1.0;
		a2 = 1.0;

		do
		{
			a1 = a2;
			a2 = ( a1 + ( num / a1 ) ) / 2.0 ;
			printf("1[%f] 2[%f]\n",a1,a2);
		}while(a1 != a2);
		//while( a2 - a1 > 0.000001);
	}

	return 0;
}


