#include "main.h"

/**
 * print_most_numbers - print the numbers, from 0 to 9, Do not print 2 & 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	char ch;

	for (ch = 48; ch <= 57; ++ch)
	{
		if (ch != 50 && ch != 52)
			_putchar(ch);
	}
	_putchar('\n');
}
