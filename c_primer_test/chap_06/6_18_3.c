#include <stdio.h>

void reverse_string( char *string )
{
	int len = 0;
	int mid = 0;
	char *start;
	char *end;
	char temp;

	end = string;
	while( *end != '\0' )
	{
		len++;
		end++;
	}
	mid = len / 2;
	//printf("len[%d]mid[%d]\n",len,mid);
	end--;
	
	start = string;

	while( mid )
	{
		temp = *start;
		*start = *end;
		*end = temp;
		//printf("[%c][%c][%c]\n",*start,*end,temp);
		start++;
		end--;
		mid--;
	}
}

int main()
{
	char str[] = "i am xiaoming";
	printf("before[%s]\n",str);
	reverse_string(str);
	printf("after[%s]\n",str);
	return 0;
}

