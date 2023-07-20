#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be checked
 *
 * Return: the last digit of number
 */

int print_last_digit(int n)
{
	if ((n < 10) && (n > -10))
	{
		if (n == 0)
		{
			_putchar(n + 48);
			return (n);
		}
		else if (n < 0)
		{
			_putchar((n * -1) + 48);
			return (n * -1);
		}
		else
		{
			_putchar(n + 48);
			return (n);
		}
	}
	else
	{
		if (n < -10)
		{
			_putchar(((n % 10) * -1) + 48);
			return ((n % 10) * -1);
		}
		else
		{
			_putchar((n % 10) + 48);
			return (n % 10);
		}
	}
}
