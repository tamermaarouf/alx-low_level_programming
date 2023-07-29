#include "main.h"

/**
 * puts2 - print every other character of a string.
 * @str: param to print
 *
 * Return: void
 */

void puts2(char *str)
{
	int index;

	index = 0;
	while (*str)
	{
		if ((index % 2) == 0)
			_putchar(*str);
		str++;
		++index;
	}
	_putchar('\n');
}
