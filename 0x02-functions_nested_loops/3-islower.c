#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercas. 0 otherwise.
 */

int _islower(int c)
{
	if ((c > 96) && (c < 123))
		return (1);
	return (0);
}
