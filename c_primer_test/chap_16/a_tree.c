/*一个使用静态数组实现的二叉搜索树，数组长度只能通过修改#define定义
 *并对模块进行重新编译来实现
*/

#include <stdio.h>
#include <assert.h>
#include "tree.h"

#define TREE_SIZE 100
#define ARRAY_SIZE ( TREE_SIZE + 1 )

/*用于存储数的所有节点的数组*/
static TREE_TYPE tree[ ARRAY_SIZE ];

/*计算一个节点左孩子的下标*/
static int left_child( int current )
{
	return current * 2;
}

/*计算一个节点右孩子的下标*/
static int right_child( int current )
{
	return current * 2 + 1;
}

void insert( TREE_TYPE value )
{
	int current;

	/*确保值为非零，因为零用于提示一个未使用的节点*/
	assert( value != 0 );

	/*从根节点开始*/
	current = 1;

	/*从合适的子树开始，直到到达一个叶节点*/
	while( tree[ current ] != 0 )
	{
		/*根据情况，进入叶节点或右子树(确信未出现重复的值)*/
		if( value < tree[ current ] )
			current = left_child( current );
		else
		{
			assert( value != tree[ current ] );
			current = right_child( current );
		}
		assert( current < ARRAY_SIZE );
	}
	tree[ current ] = value;
}

TREE_TYPE *find( TREE_TYPE value )
{
	int current;

	/*从根节点开始，直到找到那个值，进入合适的子树*/
	current = 1;
	while( current < ARRAY_SIZE && tree[ current ] != value )
	{
		/*根据情况，进入左子树或右子树*/
		if( value < tree[ current ] )
			current = left_child( current );
		else
			current = right_child( current );
	}
	if( current < ARRAY_SIZE )
		return tree + current;
	else
		return 0;
}


/*执行一层前序遍历，这个帮助函数用于保存我们当前正在处理的节点的信息
 * 它并不是用户接口的一部分
 * */
static void do_pre_order_traverse( int current, void (*callback)(TREE_TYPE value) )
{
	if( current < ARRAY_SIZE && tree[ current ] != 0 )
	{
		callback( tree[ current ] );
		do_pro_order_traverse( left_child( current ), callback );
		do_pro_order_traverse( right_child( current ), callback );
	}
}


void pre_order_traverse( void (*callback)( TREE_TYPE value ) )
{
	do_pre_order_traverse( 1, callback ); 
}































