#include "main.h"

/**
 * print_sign - Print the sign of a number
 * @n: The to be checked
 *
 * Return: 1 For positive num. -1 for negative or zero for zero
*/


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48 + 0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
