#include "main.h"

/**
 * _strncat -  concatenates two strings.
 * @dest: destination.
 * @src: source
 * @n: bytes from src.
 *
 * Return: Returns a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, count;

	index = 0;
	while (*(dest + index))
		++index;

	count = 0;
	while (count < n)
	{
		*(dest + index) = *(src + count);
		if (*(src + count) == '\0')
			break;
		++index;
		++count;
	}
	return (dest);
}

