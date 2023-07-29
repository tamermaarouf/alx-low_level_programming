#include "main.h"

/**
 * _strcpy - copies the string pointes
 * @dest: copy the buffer pointed to by dest
 * @src: the source of string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index, counter;

	index = 0;
	counter = 0;
	while ((*(dest + counter) = *(src + index)) != '\0')
	{
		index++;
		counter++;
	}
	counter++;
	*(dest + counter) = '\0';
	return (dest);
}
