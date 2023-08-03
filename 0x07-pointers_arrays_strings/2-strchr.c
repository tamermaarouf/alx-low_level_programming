#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate a character in a string.
 * @s: the string s
 * @c: the character c
 *
 * Return: the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		++s;
	}
	return (NULL);
}

