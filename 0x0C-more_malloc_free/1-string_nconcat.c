#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: contents of string
 * @s2: contents of string
 * @n: n bytes of s2
 * Return: returned the contents of s1, followed by n bytes of s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index_1, size_1, size_2, index, index_2;
	char *ptr_char;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size_1 = _strlen(s1);
	size_2 = _strlen(s2);
	if (n > size_2)
		n = size_2;
	ptr_char = (char *)malloc(sizeof(char) * (size_1 + n) + 1);
	if (ptr_char == NULL)
		return (NULL);
	index = 0;
	index_1 = 0;
	while (*(s1 + index_1) != '\0')
	{
		*(ptr_char + index) = *(s1 + index_1);
		index_1++;
		index++;
	}
	index_2 = 0;
	while (n > 0)
	{
		*(ptr_char + index) = *(s2 + index_2);
		index++;
		index_2++;
		n--;
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
