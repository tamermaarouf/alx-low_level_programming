#include "main.h"

/**
 * puts2 - print every other character of a string.
 * @str: param to print
 *
 * Return: void
 */

void puts2(char *str)
{
	while (*str)
	{
		if ((*str % 2) == 0)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
