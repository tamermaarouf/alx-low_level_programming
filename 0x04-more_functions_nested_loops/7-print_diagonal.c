#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: Where n is the number of times the character \ should be printed.
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int row, col;

		row = 0;
		while (row < n)
		{
			col = 0;
			while (col <= row)
			{
				if (row == col)
				{
					_putchar(92);
					_putchar('\n');
				}
				else
					_putchar(' ');
				++col;
			}
			++row;
		}
	}
}
