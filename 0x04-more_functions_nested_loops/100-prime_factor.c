#include <stdio.h>
#define NUM 612852475143
int main(void)
{
	long int prime;

	prime = 2;
	while (prime < NUM)
	{
		if (NUM % prime == 0)
			printf("%ld \n prime: ", prime);
		prime = prime * prime;
	}

	return (0);
}
