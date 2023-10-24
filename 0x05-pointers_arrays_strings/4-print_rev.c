#include "main.h"
#include <stdio.h>

/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */

void print_rev(char *s)
{
	int len;

	len = _strlen(s) - 1;
	while (len >= 0)
	{
		_putchar(s[len]);
		--len;
	}
	_putchar('\n');
}

/**
  * _strlen - Returns the length of a string
  * @c: String to count
  *
  * Return: String length
  */

int _strlen(char *c)
{
	int count = 0;

	while (*c)
	{
		++count;
		c++;
	}
	return (count);
}
