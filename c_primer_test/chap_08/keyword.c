#include <stdio.h>
#include <string.h>

lookup_keyword( char const * const desired_word, char const *keyword_table[], int const size )
{
	char const **kwp;

	for( kwp = keyword_table; kwp < keyword_table + size; kwp++ )
	{
		if( strcmp( desired_word, *kwp ) == 0 )
			return kwp - keyword_table;
	}
	return -1;
}


