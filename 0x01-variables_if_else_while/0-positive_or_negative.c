#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always return 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		if (n > 0)
		{
			printf("%d is positive", n);
		}
		else if (n < 0)
		{
			printf("%d is negative", n);
		}
		else
		{
			printf("%d is zero", n);
		}
		printf("\n");
		return (0);
}