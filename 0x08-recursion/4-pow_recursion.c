#include "main.h"

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
