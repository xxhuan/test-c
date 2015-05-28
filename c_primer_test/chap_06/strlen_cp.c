#include <stdio.h>

int strlen_cp( char *string )
{
	int length = 0;

	while( *string++ != '\0' )
		length += 1;
	
	return length;
}

int main()
{
	int a = 99;
	char str[] = "hello world!";
	char *p_str = str;

	int *pa = &a;
	char *pb = &a;

	printf("[%d][%d][%c]\n",*pa,*pb,a);
	printf("[%s][%d]\n",str,strlen_cp(str));
	printf("[%c][%d]\n",*p_str,strlen_cp(p_str));
	return 0;
}


