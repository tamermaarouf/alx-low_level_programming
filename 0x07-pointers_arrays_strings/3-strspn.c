#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int count = 0, index, prev;

	while (*s)
	{
		index = 0;
		prev = count;
		while (*(accept + index))
		{
			if (*s == *(accept + index))
				++count;
			++index;
		}
		if (prev == count)
			break;
		++s;
	}
	return (count);
}
