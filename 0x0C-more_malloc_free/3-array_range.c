o#include "main.h"

int *array_range(int min, int max)
{
	int *ptr, index;

	ptr = (int *)malloc(sizeof(int) * max);
	if (min > max)
	{
		return (NULL);
	}
	if (ptr == NULL)
		return (NULL);
	index = 0;
	while (min <= max)
	{
		*(ptr + index) = min;
		min++;
		index++;
	}
	return (ptr);
}
