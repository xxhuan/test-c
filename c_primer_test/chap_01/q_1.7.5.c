#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main()
{
	int quantity = 0;
	int price = 0;
	char department[MAX_SIZE];
	char test[20];

	printf("please input two integer number:");
	scanf("%d,%d",&quantity,&price);

	printf("please input a str:");
	scanf("%s",department);
	department[MAX_SIZE] = '\0';
	/*上面这句话加了没有用，而且，如何才能保证如果输入超过长度怎么保证程序正确*/	
	printf("quantity[%d],price[%d],department[%s][%s]\n",quantity,price,department,test);

	return 0;
}

