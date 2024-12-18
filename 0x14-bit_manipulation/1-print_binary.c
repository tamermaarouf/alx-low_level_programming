#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n :representation of a number.
 * Return: 0 Always Success
 */

void print_binary(unsigned long int n)
{
	unsigned int mask = 1 << 10;
	unsigned int index = 0;

	while (index <= 10)
	{
		_putchar(n & mask ? '1' : '0');
		n <<= 1;
		index++;
	}
}
