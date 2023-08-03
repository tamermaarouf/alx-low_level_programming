#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: fills the memory area
 * @b: the constant byte
 * @n: the first n bytes
 *
 * Return:  a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int index = 0;

	while (n > 0)
	{
		*(s + index) = b;
		++index;
		--n;
	}
	*(s + index) = '\0';
	return (s);
}
