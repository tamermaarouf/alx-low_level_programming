#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of character
 * @c: initializes it with a specific char.
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index, i;
	char *ptr_char = (char *)malloc(sizeof(char) * size);

	if (ptr_char == NULL)
		exit(1);
	i = 0;
	index = 0;
	while (i < size)
	{
		*(ptr_char + index) = c;
		index++;
		i++;
	}
	return (ptr_char);
}
