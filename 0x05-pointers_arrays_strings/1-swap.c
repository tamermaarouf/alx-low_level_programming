#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: the first parameter to swap
 * @b: the second parameter to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
