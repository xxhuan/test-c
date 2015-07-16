#include <stdlib.h>
#include <string.h>

typedef struct{
	char key[10];	/*数组的排序关键字*/
	int other_data; /*与关键字关联的数据*/
}Record;

/*比较函数：只比较关键字的值*/
/*该排序法是由小到大排序
compare返回值 <0:a排在b前面；=0：a等于b；>0：a排在b后面*/
int r_compare( void const *a, void const *b )
{
	return strcmp( (( Record *)a)->key, ((Record *)b)->key );
}

int main()
{
	Record array[50];

	/*用50个元素填充数组的代码*/
	qsort( array, 50, sizeof( Record ), r_compare );

	/*现在，数组已经根据结构的关键字字段排序完毕*/
	return EXIT_SUCCESS;
}


