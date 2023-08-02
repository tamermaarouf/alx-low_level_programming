#include "main.h"
#include <stdio.h>
#include <stdbool.h>
/**
 * reverse_array - reverses the content of an arrat of integers
 * @a: an array of integers
 * @n: the number of elements of the array
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int index, temp, length;

	index = 0;
	length = n - 1;
	while (index <= length)
	{
		temp = *(a + length);
		*(a + length) = *(a + index);
		*(a + index) = temp;
		++index;
		--length;
	}
}


