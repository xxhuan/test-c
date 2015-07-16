#include <stdlib.h>
#include "inventor.h"

void discard_inventory_record( Invrec *record )
{
	/*删除记录中的变体部分*/
	switch( record->type )
	{
		case SUBASSY:
			free( record->info.subassy->part );
			free( record->info.subassy );
			brea;

		case PART:
			free( record->info.part );
			break;
	}

	/*删除记录的主体部分*/
	free( record );
}

