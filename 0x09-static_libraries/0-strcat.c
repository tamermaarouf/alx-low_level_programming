#include "main.h"

/**
 * _strcat -  concatenates two strings.
 * @dest: destination.
 * @src: source
 *
 * Return: Returns a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int index, count;

	index = 0;
	while (*(dest + index))
		++index;

	count = 0;
	while (*(src + count))
	{
		*(dest + index) = *(src + count);
		if (*(src + count) == '\0')
			break;
		++index;
		++count;
	}
	return (dest);
}

