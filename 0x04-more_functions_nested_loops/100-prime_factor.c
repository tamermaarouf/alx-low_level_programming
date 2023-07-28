#include <stdio.h>

/*#define NUM 612852475143
#define NUM 20*/

int main(void)
{
	long int prime, NUM, index;

	NUM = 612852475143;
	index = 2;
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
	printf("%lu \n", prime);

	return (0);
}
