#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy_n( char dst[], char src[], int n );

int main()
{
	char src_str[20];
	char des_str[100];
	int len = 0;
	int ch;

	while(1)
	{
		memset(src_str,0x0,sizeof(src_str));
		memset(des_str,0x0,sizeof(des_str));

		//sprintf(src_str,"hello, my name is xxhuan!\n");
		printf("please input src :");
		gets(src_str);
		printf("please input len :");
		scanf("%d",&len);
		copy_n(des_str,src_str,len);
		printf("src[%s]\ndes[%s]\nlen[%d]\n",src_str,des_str,len);
		
		while( ( ch = getchar()) != EOF && ch != '\n' )
			;
	}
}

void copy_n( char des[], char src[],int n)
{
	int src_len = strlen(src);
	int i = 0;
	
	if( src_len < n)
		n = src_len;

	while( i < n )
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
}




