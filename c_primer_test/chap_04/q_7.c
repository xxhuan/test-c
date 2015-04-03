#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 128

void deblank( char string[] );

int main()
{
	char str[MAX_LEN];

	while(1)
	{
		memset( str,0x0,sizeof(str) );
		printf("enter the string:");
		gets( str );

		deblank(str);
		printf("str[%s]\n",str);
	}
	return 0;
}

int is_white( int ch )
{
	return ch == ' ' || ch == '\t' || ch == '\v' || ch == '\f' || ch ==  '\n' || ch == '\r';
}

void deblank( char string[] )
{
	char *dest;
	char *src;
	int ch;

	src = string;
	dest = string++;

	while( ( ch = *src++ ) != '\0' )
	{
		if( is_white( ch ) )
		{
			if( src == string || !is_white( dest[-1] ) )
				*dest++ = ' ';
		}
		else
		{
			*dest++ = ch;
		}
	}
	*dest = '\0';
	//memcpy(string, dest,strlen(dest));
}







