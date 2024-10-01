#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a pointer to the duplicated string.
 * @str: string which is a duplicate of the string str
 * Return: a pointer to the duplicated string. NULL if str = NULL
 */
char *_strdup(char *str)
{
	unsigned int size, index;
	char *ptr_char;

	size = 0;
	if (str == NULL)
		return (NULL);
	index = 0;
	while (*(str + index) != '\0')
	{
		size++;
		index++;
	}
	ptr_char = (char *)malloc(sizeof(char) * size);
	if (ptr_char == NULL)
		exit(1);
	index = 0;
	while (index <= size)
	{
		*(ptr_char + index) = *(str + index);
		index++;
	}
	*(ptr_char) += '\0';
	return (ptr_char);
}
