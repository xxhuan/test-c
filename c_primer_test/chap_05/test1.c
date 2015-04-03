#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;
	int b = 1;

	int len = sizeof(a=b+5);
	printf("len[%d],a[%d]\n",len,a);
	return 0;
}
