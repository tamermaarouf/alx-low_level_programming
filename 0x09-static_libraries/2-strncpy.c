#include "main.h"
/**
 * _strncpy - copies string from source to destination
 * @dest: destination string
 * @src: source string to be copied
 * @n: bytes to be copied from source string
 *
 * Return: destination string concatenated
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while ((index < n) && (*(src + index) != '\0'))
	{
		*(dest + index) = *(src + index);
		++index;
	}
	while (index < n)
	{
		*(dest + index) = '\0';
		++index;
	}
	return (dest);
}
