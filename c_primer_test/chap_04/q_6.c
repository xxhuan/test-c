#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 128

int substr( char dst[], char src[], int start, int len);

int main()
{
	char src_str[MAX_LEN];
	char des_str[MAX_LEN];
	int start = 0;
	int len =0;
	int cpy_len = 0;
	int ch;

	while(1)
	{
		memset(src_str,0x0,sizeof(src_str));
		memset(des_str,0x0,sizeof(des_str));
		printf("enter the string:");
		gets(src_str);
		printf("enter the start and len:");
		scanf("%d,%d",&start,&len);
		while( ( ch = getchar()) != EOF && ch != '\n')
			;
		
		cpy_len = substr(des_str,src_str,start,len);
		printf("src[%s]des[%s]cpy[%d]start[%d]len[%d]\n",src_str,des_str,cpy_len,start,len);

	}
	return 0;
}


int substr( char dst[], char src[], int start, int len)
{
	int src_len = strlen(src);
	int i = 0;

	if( start > src_len || start < 0 || len < 0 )
		return 0;

	if( ( src_len - start ) < len )
		len = src_len - start;

	while( i < len )
	{
		dst[i] = src[start + i];
		i++;
	}
	dst[len] = '\0';
	return strlen(dst);
}




