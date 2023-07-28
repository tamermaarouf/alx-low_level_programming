#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (success)
 */

int main(void)
{
	long int prime, NUM, index;

	NUM = 612852475143;
	index = 2;
	prime = -1;
	while (index <= NUM)
	{
		if (NUM % index == 0)
		{
			prime = index;
			NUM = NUM / index;
			index = index;
		}
		else
			++index;
	}
	printf("%ld\n", prime);
	return (0);
}
