#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *string_toupper - changes the char in a string from lower to uppercase
 *
 *@c: the pointer containing the string
 *
 *Return: the string already converted
 */

char *string_toupper(char *c)
{
	int index;

	index = 0;
	while (*(c + index))
	{
		if ((*(c + index) >= 97) && (*(c + index) <= 122))
			*(c + index) -= 32;
		++index;
	}
	return (c);
}
