#include "main.h"
#include <stdbool.h>

/**
 * rev_string - reverse string.
 * @s: param of string.
 *
 * Return: void
 */

void rev_string(char *s)
{
	int index, head;
	char tmp;

	index = _strlen(s) - 1;
	head = 0;
	while (index > 0)
	{
		tmp = *(s + index);
		*(s + index) = *(s + head);
		*(s + head) = tmp;
		++head;
		--index;
	}
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
