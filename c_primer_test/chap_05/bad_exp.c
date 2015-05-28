#include <stdio.h>

int main()
{
	int i = 10;

	i = i-- - --i * ( i = -3 ) * i++ + ++i;
	printf("%d\n",i);
	return 0;
}
