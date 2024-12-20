#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit
 * @n: value to get bit
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;
	unsigned int pos;

	if (index > 63)
		return (-1);
	for (pos = 12; pos > 0; --pos)
	{
		if (pos == index)
			return ((n & mask ? '1' : '0') - '0');
	}
	return ((n & mask ? '1' : '0') - '0');
}
