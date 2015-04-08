#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#define MAX_INPUT_SIZE 1000
//#define MAX_INPUT_LINE 5

int main ()
{
#if 0
	while( line_count < MAX_INPUT_LINE )
	{
		memset(input_buf,0x0,sizeof(input_buf));
		scanf("%s",input_buf);
		line_count++;
		printf("[%d] %s\n",line_count,input_buf);
	}
	
	while( gets( input_buf) != NULL )
	{
		line_count = strlen( input_buf );
		printf("[%d][%s]\n",line_count,input_buf);
	}
#endif 
	
	int ch;
	int line;
	int at_begining;

	ch = 0;
	line = 0;
	at_begining = 1;

	while( (ch = getchar()) != EOF )
	{
		if( at_begining == 1)
		{
			at_begining = 0;
			line += 1;
			printf("[%d] ",line);
		}

		putchar( ch );
		if( ch == '\n' )
			at_begining = 1;
	}
	

	return 0;

}

