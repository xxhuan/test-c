#include <stdio.h>
#include <string.h>

int main()
{
	char x[] = "hellotest";
	char y[] = "lalalalalalala";

	if( strlen( x ) - strlen( y ) >= 0 )
		printf("x is longer than y!\n");
	printf("[%d][%d]\n",strlen(x),strlen(y));
	return 0;
}

