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


	while ((*(src + index) != '\0') && (index < n))
	{
		*(dest + index) = *(src + index);
		++index;
	}
	*(dest + index)= '\0';
	return (dest);
}
