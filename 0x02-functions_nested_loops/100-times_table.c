#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print the n times table starting with 0.
 * @n: the number to be print
 *
 * Return: matrix
 */
void print_times_table(int n)
{
	if ((n >= 0) && (n < 15))
	{
		int count, index, result;

		count = 0;
		while (count <= n)
		{
			index = 1;
			_putchar(48);
			_putchar(',');
			while (index <= n)
			{
				_putchar(' ');
				result = index * count;
				if (result <= 99)
					_putchar(' ');
				if (result <= 9)
					_putchar(' ');
				if (result > 99)
				{
					_putchar((result / 100) + 48);
					_putchar(((result / 10) % 10) + 48);
				}
				else if (result > 9 && result <= 99)
					_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
				if (index != n)
					_putchar(',');
				else
					_putchar('\n');

				index++;
			}
			count++;
		}
	}
}
