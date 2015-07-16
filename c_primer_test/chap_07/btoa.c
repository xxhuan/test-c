#include <stdio.h>

void binary_to_ascii( unsigned int value )
{
	unsigned int quotient;

	quotient = value / 10;
	if( quotient != 0 )
		binary_to_ascii( quotient );
	putchar( value % 10 + '0' );
}

int main()
{
	binary_to_ascii( 4529854 );
	printf("\n");
	return 0;
}
