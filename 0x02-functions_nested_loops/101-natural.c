#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0.
 */

int main(void)
{
	int counter = 0, sum = 0;

	while (counter < 1024)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
			sum += counter;
		counter++;
	}
	printf("%d\n", sum);
	return (0);
}
