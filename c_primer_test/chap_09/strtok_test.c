#include <stdio.h>
#include <string.h>

void print_tokens( char *line )
{
	static char whitespace[] = " \t\f\r\v\n";
	char *token;

	for( token = strtok( line,whitespace ); token != NULL; token = strtok( NULL, whitespace ) )
	{
		printf("Next token is [%s]\n",token);
	}
}

int main()
{
	char test[] = "hello my name is xxhuan!";

	print_tokens(test);
	return 0;
}

