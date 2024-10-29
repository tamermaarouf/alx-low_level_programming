#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * @array: a parameter on each element of an array to print
 * @size: size of the array
 * @action: pointer to function
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *ptr;
	int *const arrayEnd = array + size;

	if (array != 00 && action != 00)
		for (ptr = array; ptr < arrayEnd; ++ptr)
			(*action)(*ptr);
}
