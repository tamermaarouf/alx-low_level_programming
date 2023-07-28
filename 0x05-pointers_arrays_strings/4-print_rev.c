#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: param to reverse
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
		index--;
	}
	_putchar('\n');
}

/**
 * _strlen - calculate length if string 
 * @s: param to calculate
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s++)
		length++;
	return (length);
}
