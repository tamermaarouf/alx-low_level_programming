#include <stdio.h>
#include "main.h"
/**
 * clear_bit - that sets the value of a bit to 0 at a given index.
 * @n: the value of a bit
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > 63)
		return (-1);
	*n &= ~(mask);
	return (1);
}
