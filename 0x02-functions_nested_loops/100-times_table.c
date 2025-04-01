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
			index = 0;
			while (index <= n)
			{
				result = index * count;
				if (index != n)
				{
					if (result <= 9)
					{
						_putchar(result + 48);
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if ((result <= 99) && (result > 9))
					{
						_putchar((result / 10) + 48);
						_putchar((result % 10) + 48);
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					else
					{
						_putchar(result);
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					_putchar(result + 48);
					_putchar('\n');
				}
				index++;
			}
			count++;
		}
		_putchar('\n');
	}
}
