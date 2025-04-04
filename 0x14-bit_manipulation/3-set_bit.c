#include <stdio.h>
#include "main.h"
/**
 * set_bit -  sets the value of a bit to 1
 * @n: the value of a bit to 1 at a given index.
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > 63)
		return (-1);
	*n = *n | mask;
	return (1);
}
