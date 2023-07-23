#include "main.h"

/**
 * print_triangle - print a triangle.
 * @size: is the size of the triangle.
 *
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int row, col;

		row = 1;
		while (row <= size)
		{
			col = size;
			while (col > 0)
			{
				if (col <= row)
					_putchar('#');
				else
					_putchar(' ');
				--col;
			}
			_putchar('\n');
			++row;
		}
	}
}


