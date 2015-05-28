#include <stdio.h>
#include <assert.h>

#define TRUE 1
#define FALSE 0

int find_char_1( char **strings, char value )
{
	char *string;

	while( ( string = *strings++ ) != NULL )
	{
		while( *string != '\0' )
		{
			if( *string++ == value )
				return TRUE;
		}
	}
	return FALSE;
}

int find_char_2( char **strings,int value )
{
	assert( strings != NULL );

	while( *strings != NULL )
	{
		while( **strings != '\0' )
		{
			if( *(*strings)++ == value)
				return TRUE;
		}
		strings++;
	}
	return FALSE;
}

int main()
{
	char *str = "hello world, i am a single man!";

	int rec;

	printf("1[%d],2[%d]\n",find_char_1(*str,','),find_char_2(*str,97));
	return 0;
}

