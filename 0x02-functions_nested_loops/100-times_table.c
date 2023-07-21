#include <stdio.h>
#include "main.h"


/**
 * print_times_table - print the n times table starting with 0.
 * @n: the number to be print
 *
 * Return: matrix
 */
void print_times_table(int n)
{
	if ((n >= 0) && (n < 15))
	{
		int count, index, result;

		count = 0;
		while (count <= n)
		{
			index = 0;
			while (index <= n)
			{
				result = index * count;
				if (index != n)
				{
					if (((index + 1) * count) <= 9)
						printf("%i,   ", result);
					else if (((index + 1) * count) <= 99)
						printf("%i,  ", result);
					else
						printf("%i, ", result);
				}
				else
					printf("%i", result);
				index++;
			}
			printf("\n");
			count++;
		}
		printf("\n");
	}
}
