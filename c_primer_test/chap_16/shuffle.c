/*使用随机数在牌桌上洗牌，第二个参数指定牌的数字，
当这个函数第一次调用，调用srand函数初始化随机数发生器*/

#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

void shuffle( int *deck, int n_cards )
{
	int i;
	static int first_time = TRUE;

	/*如果尚未进行初始化，用当天的当前时间作为随机数发生器*/
	if( first_time )
	{
		first_time = FALSE;
		srand( (unsigned int)time( NULL ) );
	}

	/*通过交换随机对得牌进行洗牌*/
	for( i = n_cards - 1; i > 0; i -= 1 )
	{
		int where;
		int temp;
		where = rand() % i;
		temp = deck[where];
		deck[where] = deck[i];
		deck[i] = temp;
	}
}

