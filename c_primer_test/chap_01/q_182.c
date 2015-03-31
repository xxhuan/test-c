#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_SIZE 1000
#define MAX_INPUT_LINE 5

int main ()
{
	int line_count = 0;
	char input_buf[MAX_INPUT_SIZE];

	while( line_count < MAX_INPUT_LINE )
	{
		memset(input_buf,0x0,sizeof(input_buf));
		scanf("%s",input_buf);
		line_count++;
		printf("[%d] %s\n",line_count,input_buf);
	}

	return 0;

}

