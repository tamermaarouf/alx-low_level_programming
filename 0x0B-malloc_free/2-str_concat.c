#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: contents of string
 * @s2: contents of string
 * Return: returned the contents of s1, followed by the contents of s2
 */
char *str_concat(char *s1, char *s2)
{
	int index_s1, index_s2, index;
	int size_s1, size_s2;
	char *ptr_char;

	size_s1 = _strlen(s1);
	size_s2 = _strlen(s2);
	ptr_char = (char *)malloc((sizeof(char) * (size_s1 + size_s2)) + 1);
	if (ptr_char == NULL)
		return (NULL);
	index_s2 = 0;
	index = 0;
	index_s1 = 0;
	if (s1 != NULL)
	{
		while (*(s1 + index_s1) != '\0')
		{
			*(ptr_char + index) = *(s1 + index_s1);
			index++;
			index_s1++;
		}
	}
	if (s2 != NULL)
	{
		while (*(s2 + index_s2) != '\0')
		{
			*(ptr_char + index) = *(s2 + index_s2);
			index_s2++;
			index++;
		}
	}
	*(ptr_char + index) = '\0';
	return (ptr_char);
}


/**
 * _strlen - calculates the length of a string point to by s.
 * @s: pointer to string for calculates
 *
 * Return: returns the number of bytes in the string pointed to by s.
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*(s + length) != '\0')
		++length;
	return (length);
}
