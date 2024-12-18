#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:  the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int index, pow, N, p = 0;
	unsigned int to_unit = 0;

	if (b == NULL)
		return (0);

	index = (_strlen(b) - 1);
	while (index >= 0)
	{
		if ((*(b + index) == 48) || (*(b + index) == 49))
		{
			pow = _pow_recursion(2, p);
			N = *(b + index) - '0';
			to_unit += N * pow;
		}
		else
			return (0);
		index--;
		p++;
	}
	return (to_unit);
}


/**
 * _strlen - calculates the length of a string point to by s.
 * @s: pointer to string for calculates
 *
 * Return: returns the number of bytes in the string pointed to by s.
 */
int _strlen(const char *s)
{
	unsigned int length = 0;

	while (*(s + length))
		length++;
	return (length);
}


/**
 * _pow_recursion - raises x to th power of y
 * @x: Number Integer
 * @y: Power
 *
 * Return: On success 1.
 * On erroe, -1 returned and error is set
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
