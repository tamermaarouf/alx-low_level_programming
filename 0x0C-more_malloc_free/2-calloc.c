#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	u_int8_t *ptr;
	unsigned int index = 0;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	ptr = (u_int8_t *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (index < nmemb)
	{
		ptr[index] = 0;
		index++;
	}
	return (ptr);
}
