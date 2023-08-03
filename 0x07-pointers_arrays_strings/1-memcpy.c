#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index = 0;

	while ((n > 0) && (*(src + index) != '\0'))
	{
		*(dest + index) = *(src + index);
		--n;
		++index;
	}
	return (dest);
}

