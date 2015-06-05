#include <stdio.h>

int del_substr( char *str, char const *substr )
{
	char *temp_src;
	char const *temp_sub;
	char *start;
	char *end;

	while( *str != '\0' )
	{
		temp_src = str;
		temp_sub = substr;
		start = str;
		while( *temp_sub != '\0' )
		{
			if( *temp_src != *temp_sub )
			{
				temp_sub++;
				break;
			}
			else
			{
				temp_sub++;
				temp_src++;
			}
		}
		if( *temp_sub == '\0' )
		{
			end = temp_src;
			while( *end != '\0' )
			{
				*start = *end;
				start++;
				end++;
			}
			*start = '\0';
			start = NULL;
			end = NULL;
			temp_src = NULL;
			temp_sub = NULL;
			return 1;
		}
		str++;
	}
	return 0;
}

int main()
{
	char src[] = "ABCDEFGHIJ";
	char sub[] = "DEF";

	int a = 0;

	a = del_substr(src,sub);
	printf("[%d][%s]\n",a,src);
	return 0;
}

