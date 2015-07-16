#include <stdio.h>
#include <stdarg.h>

float average( int n_values, ... )
{
	va_list var_arg;
	int count;
	float sum = 0;

	va_start( var_arg, n_values );

	for( count = 0; count < n_values; count += 1 )
	{
		sum += va_arg( var_arg, double );
	}

	va_end( var_arg );

	return sum / n_values;
}

int main()
{
	printf("[%f]\n",average(4,9.0,9.0,9.0,9.4) );
	return 0;
}



