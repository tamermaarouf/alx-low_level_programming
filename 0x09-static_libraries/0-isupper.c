#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: The c argument is an int, the value of which the app ensure is character
 *
 * Return: return 1 if c is an uppercase letter. otherwise return 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
