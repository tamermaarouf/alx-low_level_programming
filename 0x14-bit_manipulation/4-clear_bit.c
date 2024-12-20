#include <stdio.h>
#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > 63)
		return (-1);
	if (*n == 0)
		*n = 0;
	else
		*n ^= mask;
	return (1);
}
