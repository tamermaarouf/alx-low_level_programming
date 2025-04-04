#include "variadic_functions.h"
/**
 * print_numbers - Write a function that prints numbers
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));
		if ((i < (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
