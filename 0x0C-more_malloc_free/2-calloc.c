#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: an array of nmemb elements
 * @size: size bytes
 * Return: returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int index = 0;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	ptr = (char *)malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (index < (nmemb * size))
		{
			ptr[index] = 0;
			index++;
		}
		return (ptr);
	}
}
