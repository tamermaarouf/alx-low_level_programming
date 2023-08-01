#include "main.h"

char *_strcat(char *dest, char *src)
{
	int index, count;

	index = 0;
	while (*(dest + index))
		++index;

	count = 0;
	while (*(src + count))
	{
		*(dest + index) = *(src + count);
		if (*(src + count) == '\0')
			break;
		++index;
		++count;
	}
	return (dest);
}

