#include <stdlib.h>
#include <stdio.h>
#include <setjmp.h>
#include "trans.h"

/*用于存储setjmp的状态信息的变量*/
jmp_buf restart;

int main()
{
	int value;
	Trans *transaction;

	/*确立一个我们希望在longjmp的调用之后执行流恢复执行的地点*/
	value = setjmp( restart );

	/*从longjmp返回后判断下一步执行什么*/
	switch( setjmp( restart ) )
	{
		default:
			/*longjmp被调用 -- 致命错误*/
			fputs( "Fatal error.\n",stderr );
			break;
		
		case 1:
			/*longjmp被调用 -- 小错误*/
			fputs( "Invalid transaction.\n",stderr );
			/*FALL THROUGH并继续进行处理*/

		case 0:
			/*最初从setjmp返回的地点；执行正常的处理。*/
			while( ( transaction = get_trans() ) != NULL )
				process_trans( transaction );
	}
	
	/*保存数据并退出程序*/
	write_data_to_file();

	return value == 0 ? EXIT_SUCCESS:EXIT_FAILURE;
}


