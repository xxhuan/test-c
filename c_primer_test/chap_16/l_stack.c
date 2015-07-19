/*一个用链表实现的堆栈，该堆栈没有长度限制*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>
#include "stack.h"

#define FALSE 0

/*定义一个结构以存储堆栈元素，其中link字段将指向堆栈的下一个元素*/
typedef struct STACK_NODE
{
	STACK_TYPE value;
	struct STACK_NODE *next;
} StackNode;

/*指向堆栈中第一个节点的指针*/
static StackNode *stack;

void creat_stack( size_t size )
{

}

void destory_stack( void )
{
	while( !is_empty() )
	{
		pop();
	}
}

void push( STACK_TYPE value )
{
	StackNode *new_node;

	new_node = malloc( sizeof( StackNode ) );
	assert( new_node != NULL );
	new_node->value = value;
	new_node->next = stack;
	stack = new_node;
}

void pop( void )
{
	StackNode *first_node;

	assert( !is_empty() );
	first_node = stack;
	stack = first_node->next;
	free( first_node );
}

STACK_TYPE top( void )
{
	assert( !is_empty() )
	return stack->value;
}

int is_empty( void )
{
	return stack == NULL;
}

int is_full( void )
{
	return FALSE;
}

