#include "main.h"

/**
 * _abs - check the absolute value of an integer.
 * @n: The number to be checked.
 *
 * Return: Absolute value of number .
 */
int _abs(int n)
{
	int result;

	result = (n < 0) ? (-1 * n) : (n);
	return (result);
}

