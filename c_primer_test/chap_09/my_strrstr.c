#include <stdio.h>
#include <string.h>

char *my_strrstr( char const *s1, char const *s2 )
{
	register char *last;
	register char *current;

	last = NULL;

	if( *s2 != '\0' ) //只有当s2不为空时查找
	{
		current = strstr( s1, s2 );		//查找s2在s1中第一次出现的位置

		while( current ! = NULL )
		{
			last = current;
			current = strstr( last + 1, s2 );
		}
	}
	return last;	//返回指向最后一次匹配的起始位置的指针
}

