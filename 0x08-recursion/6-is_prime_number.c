#include "main.h"

/**
 * _prime - Make possible to evaluate from 1 to n
 * @x: same number as n
 * @y: number that iterates from 1 to n
 *
 * Return: on success 1
 */

int _prime(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (_prime(x, y + 1));
}

/**
 * is_prime_number - checks if a number is prime.
 * @n: Number Integer.
 *
 * Return: On success 1.
 */


int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
