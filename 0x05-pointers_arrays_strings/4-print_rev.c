#include "main.h"

/**
 * print_rev - reverse string.
 * @s: param of string.
 *
 * Return: void
 */

void print_rev(char *s)
{
	int index;

	index = _strlen(s) - 1;
	while (index >= 0)
	{
		_putchar(*(s + index));
		--index;
	}
	_putchar('\n');
}

/**
 * _strlen - calculate length of string
 * @s: param of string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*s++)
		counter++;
	return (counter);
}
