#include "main.h"
#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	int index, count;

	index = 0;
	while (*(dest + index) != '\0')
		++index;

	count = 0;
	while (*(src + count) != '\n')
	{
		*(dest + index) = *(src + count);
		if (*(src + count) == '\0')
			break;
		++index;
		++count;
	}
	++index;
	*(dest + index) = '\0';
	return (dest);
}

