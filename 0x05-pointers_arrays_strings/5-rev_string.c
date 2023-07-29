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
	bool flag;

	index = _strlen(s) - 1;
	head = 0;
	flag = true;
	while (flag)
	{
		if (head > (index / 2))
		{
			flag = false;
		}
		else
		{
			tmp = *(s + index);
			*(s + index) = *(s + head);
			*(s + head) = tmp;
		}
		--index;
		++head;
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
