#include "main.h"

/**
 * factorial - gets factorial of n
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
