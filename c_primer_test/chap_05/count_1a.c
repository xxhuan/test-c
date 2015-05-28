#include <stdio.h>

int count_one_bits(unsigned value)
{
	int ones;

	for(ones=0;value!=0;value=value>>1)
	{
		if( value % 2 != 0 )
		//if( ( value & 1 ) != 0 ) 优化后的代码
			ones = ones + 1;
	}
	return ones;
}

int main()
{
	int value;
	int count;
	while(1)
	{
		value = 0;
		count = 0;
		printf("please input the value:");
		scanf("%d",&value);
		count = count_one_bits(value);
		printf("value[%d],count[%d]\n",value,count);
	}
	return 0;
}
