#include "main.h"

/**
 * _sqrt_rec - Makes possible to evalute from 1 to n.
 * @x: same number as n.
 * @y: number that iterates from 1 to n.
 *
 * Return: on Success 1.
 */

int _sqrt_rec(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	else
		return (_sqrt_rec(x, y + 1));
}

/**
 * _sqrt_recursion - return the natuaral square root of n.
 * @n: Number Integer
 *
 * Return: On success 1.
 */


int _sqrt_recursion(int n)
{
	return (_sqrt_rec(n, 1));
}
