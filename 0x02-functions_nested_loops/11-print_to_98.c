#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print to number 98
 * @n: start number
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%i, ", n);
			else
				printf("%i", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n != 98)
				printf("%i, ", n);
			else
				printf("%i", n);
			n--;
		}
	}
	printf("\n");
}

