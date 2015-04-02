#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char per_str[100];
	char cur_str[100];
	int flag = 0;
	int ch;

	while(1)
	{
		//memset(per_str,0x0,sizeof(per_str));
		memset(cur_str,0x0,sizeof(cur_str));

		printf("enter the str:");
		gets(cur_str);

		//while( ( ch = getchar() ) != EOF && ch !='\n' )
			//;

		if( strcmp(cur_str,per_str) == 0 )
		{
			if( flag == 0 )
			{
				printf("[%s]\n",cur_str);
				flag = 1;
			}
		}
		else
			flag = 0;

		strcpy(per_str,cur_str);
	}
	return 0;
}


