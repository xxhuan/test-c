#include <stdio.h>

int main()
{
	int i[10] = {1,2,3,4,5,6,7,8,9,0};
	int *p = &i[0];
	int *q = &i[0];
	int offset = 3;

	p += offset;
	printf("[%d]\n",*p);

	q += 3;
	printf("[%d]\n",*q);

	return 9;
}
