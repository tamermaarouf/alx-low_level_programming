#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (success)
 */

int main(void)
{
	long int n1, n2, sum, index;

	n1 = 1;
	n2 = 2;
	printf("%lu, ", n1);
	printf("%lu, ", n2);
	sum = n1 + n2;
	index = sum;
	while (index <= 50)
	{
		if (index == 50)
			printf("%lu", sum);
		else
		{
			printf("%lu, ", sum);
			n1 = n2;
			n2 = sum;
			sum = n1 + n2;
		}
		++index;
	}
	printf("\n");

	return (0);
}

