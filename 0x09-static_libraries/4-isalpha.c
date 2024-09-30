#include "main.h"

/**
 * _isalpha - Checks if a character is lowercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercas or uppercase. 0 otherwise.
 */

int _isalpha(int c)
{
	if (((c > 96) && (c < 123)) || ((c > 64) && (c < 91)))
		return (1);
	return (0);
}
