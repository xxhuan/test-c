#include <stdio.h>

long fibonacci_rec( int n )
{
	if( n <= 2 )
		return 1;
	
	return fibonacci_rec( n - 1 ) + fibonacci_rec( n - 2 );
}

long fibonacci_iter( int n )
{
	long result;
	long previous_result;
	long next_older_result;

	result = previous_result = 1;

	while( n > 2 )
	{
		n -= 1;
		next_older_result = previous_result;
		previous_result = result;
		result = previous_result + next_older_result;
	}
	return result;
}

int main()
{
	long result;

	//result = fibonacci_rec(40);
	result = fibonacci_iter(60);
	printf("[%ld]\n",result);
}



