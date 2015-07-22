/*一个使用动态分配的链式结构实现的二叉搜索树*/
#include <assert.h>
#include <stdio.h>
#include <malloc.h>
#include "tree.h"

/*treenode结构包含了值和两个指向某个树节点的指针*/
typedef struct TREE_NODE{
	TREE_TYPE value;
	struct TREE_NODE *left;
	struct TREE_NODE *right;
}TreeNode;

/*指向树根节点的指针*/
static TreeNode *tree;

void insert( TREE_TYPE value )
{
	TreeNode *current;
	TreeNode **link;

	/*从根节点开始*/
	link = &tree;

	/*持续查找值，进入合适的子树*/
	while( (current = *link) != NULL )
	{
		/*根据情况，进入左子树或者右子树(确认没有出现重复的值)*/
		if( value < current->value )
			link = &current->left;
		else
		{
			assert( value != current->value );
			link = &current->right;
		}
	}
}


/*分配一个新的节点，使适当节点的link字段指向它*/
current = malloc( sizeof( TreeNode ) );
assert( current != NULL );
current->value = value;
current->left = NULL;
current->right = NULL;
*link = current;

TREE_TYPE *find( TREE_TYPE value )
{
	TreeNode *current;

	/*从根节点开始，直到找到这个值，进入合适的子树*/
	current = tree;
	while( current != NULL && current->value != value )
	{
		/*根据情况，进入左子树或右子树*/
		if( value < current->value )
			current = current->left;
		else
			current = current->right;
	}
	if( current != NULL )
		return &current->value;
	else 
		return NULL;
}

/*执行一层前序遍历，这个帮主函数用于保存我们当前正在处理的节点的信息
 * 这个函数并不是用户接口的一部分
 * */
static void do_pre_order_traverse( TreeNode *current, void(*callback)( TREE_TYPE value ) )
{
	if( current != NULL )
	{
		callback( current->value );
		do_pre_order_traverse( current->left, callback );
		do_pre_order_traverse( current->right, callback );
	}
}

void pre_order_traverse( void (*callback)( TREE_TYPE value ) )
{
	do_pre_order_traverse( tree, callback );
}






















