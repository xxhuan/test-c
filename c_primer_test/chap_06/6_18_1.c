#include <stdio.h>

char *find_char( char const *source, char const *chars)
{
	char *key_p;

	while( *source++ != '\0' )
	{
		while( *chars++ != '\0')
		{
			if( *chars == *source )
			{
				key_p = source;
				return key_p;
			}
		}
	}
	return NULL;
}

int main()
{
	char src[] = "hello world";
	char chars[] = "test";
	char *p;
	char *q;

	p = &src;
	printf("[%c][%c]\n",*p,*p);
	q = p + 3;
	p = find_char(src,chars);
	printf("[%c][%c]\n",*p,*q);
	
	return 0;
}

