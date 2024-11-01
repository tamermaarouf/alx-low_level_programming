#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: number of argument
 * Return: Always return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);
	va_end(ap);
	return (sum);
}
