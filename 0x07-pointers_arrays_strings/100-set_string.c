#include <stdio.h>
#include "main.h"

/**
 * set_string - function that  sets the value of a pointer to a char.
 * *@s: first value -char
 * @to: second value -int
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
