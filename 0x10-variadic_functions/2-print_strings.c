#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *next = va_arg(args, char *);

		if (next != NULL)
			printf("%s", next);
		else
			printf("(nil)");
		if ((i < (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
