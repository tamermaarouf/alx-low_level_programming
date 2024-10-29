#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: array of element
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0, *ptr;
	int *const arrayEnd = array + size;

	if (size <= 0)
		return (-1);
	if (array != 00 && cmp != 00)
	{
		for (ptr = array; ptr < arrayEnd; ++ptr, ++index)
			if ((*cmp)(*ptr))
				return (index);
	}
	return (-1);
}
