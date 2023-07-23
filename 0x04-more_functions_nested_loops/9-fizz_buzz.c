#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int count;

	count = 1;
	while (count <= 100)
	{
		if ((count % 3 == 0) && (count % 5 == 0))
			printf("%s ", "FizzBuzz");
		else if (count % 3 == 0)
			printf("%s ", "Fizz");
		else if (count % 5 == 0)
			printf("%s ", "Buzz");
		else
			printf("%i ", count);
		++count;
	}
	printf("\n");
	return (0);
}
