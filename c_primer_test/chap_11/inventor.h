/*
存货纪录的声明
*/

/*
包含零件专用信息的结构
*/
typedef struct {
	int cost;
	int supplient;
	/* 其他信息 */
}Partinfo;

/*
存储装配件专用信息的结构
*/
typedef struct {
	int n_parts;
	struct SUBASSYPART {
		char partno[10];
		short quan;
	} *part;
} Subassyinfo;


/*
存货纪录结构，他是一个变体纪录
*/
typedef struct {
	char partno[10];
	int quan;
	enum { PART, SUBASSY } type;
	union {
		Partinfo *part;
		Subassinfo *subassy;
	} info;
} Invrec;


