#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *ptr;
	int *const arrayEnd = array + size;

	for (ptr = array; ptr < arrayEnd; ++ptr)
		(*action)(*ptr);
}
