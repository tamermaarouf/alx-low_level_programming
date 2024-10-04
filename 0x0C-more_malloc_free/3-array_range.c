#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: should contain all the values from min
 * @max: should contain all the values to max
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr, index;

	if (min > max)
	{
		return (NULL);
	}
	ptr = (int *)malloc(sizeof(int) * (max + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (min <= max)
	{
		*(ptr + index) = min;
		min++;
		index++;
	}
	return (ptr);
}
