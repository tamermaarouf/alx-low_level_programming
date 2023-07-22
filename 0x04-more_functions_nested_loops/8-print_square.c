#include "main.h"


/**
 * print_square - a function that prints a square.
 * @size: is the size of the square.
 *
 * Return: void.
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int row, col;

		row = 1;
		while (row <= size)
		{
			col = 1;
			while (col <= size)
			{
				_putchar(35);
				if (col == size)
					_putchar('\n');
				++col;
			}
			++row;
		}
		_putchar('\n');
	}
}


