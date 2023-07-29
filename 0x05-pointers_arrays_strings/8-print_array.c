#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array of integers
 * @a: pointer of array
 * @n:  is the number of elements of the array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int counter;

	counter = 0;
	while (counter < n)
	{
		if (counter == (n - 1))
			printf("%d", a[counter]);
		else
			printf("%d, ", a[counter]);
		++counter;
	}
	printf("\n");
}
