#include <stdlib.h>
#include <string.h>

typedef struct{
	char key[10];		/*数组的排序关键字*/
	int other_data;		/*与关键字关联的数据*/
}Record;

/*比较函数：只比较关键字*/
int r_compare( void const *a, void const *b )
{
	return strcmp( ((Record *)a)->key, ((Record *)b)->key );
}

int main()
{
	Record array[50];
	Record key;
	Record *ans;

	/*用50个元素填充数组并进行排序的代码*/
	/*创建一个关键字结构，只用需要查找的值填充关键字字段，并在数组中查找*/
	strcpy( key.key, "value");
	ans = bsearch( &key, array, 50, sizeof( Record ), r_compare );

	/*ans现在指向关键字字段与值匹配的数据元素，如无匹配，ans为NULL*/
	return EXIT_SUCCESS;
}

