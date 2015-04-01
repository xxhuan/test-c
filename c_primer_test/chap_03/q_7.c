#include <stdio.h>
#include <stdlib.h>

int main()
{
	enum Liquid 
	{
		OUNCE = 1,
		CUP = 8,
		PINT = 16,
		QUART = 32,
		GALLON = 128
	};

	enum Liquid jar;


	jar  = QUART;
	printf("q [%d]\n",jar);

	jar = jar + PINT;
	printf("q [%d]\n",jar);
	
	return 0;
}

