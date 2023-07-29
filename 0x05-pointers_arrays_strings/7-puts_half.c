#include "main.h"

/**
 * puts_half - print half of a string.
 * @str: pointer of string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int count, index;

	count = _strlen(str);
	if (count % 2 == 0)
		index = (count / 2);
	else
		index = ((count - 1) / 2) + 1;
	while (index < count)
	{
		_putchar(*(str + index));
		++index;
	}
	_putchar('\n');
}

/**
 * _strlen - calculate length of string
 * @s: pointer of string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s)
	{
		++length;
		++s;
	}
	return (length);
}
