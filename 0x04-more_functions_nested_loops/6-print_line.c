#include <stdio.h>
#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: n is the number of times the character _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int counter;

		counter = 0;
		while (counter <= n)
		{
			_putchar(95);
			++counter;
		}
		_putchar('\n');
	}
}
