#include "variadic_functions.h"
/**
 * get_op_func - funtion get function to print
 * @s: list of type format
 * @ap: pionter too list
 * @fl: flag
 * Return: void
 */

void get_op_func(char s, va_list ap, int *fl)
{
	switch (s)
	{
		case 'c':
			printf("%c", va_arg(ap, int)), *fl = 1;
			break;
		case 'i':
			printf("%i", va_arg(ap, int)), *fl = 1;
			break;
		case 's':
			if (!s)
				printf("(nil)");
			printf("%s", va_arg(ap, char *)), *fl = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double)), *fl = 1;
			break;
		default:
			*fl = 0;
	}
}
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: no return.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	int flag = 0;
	char s;

	va_start(args, format);
	while (*(format + i) && format)
	{
		s = *(format + i);
		get_op_func(s, args, &flag);
		if ((flag) && (*(format + i + 1)))
			printf(", ");
		++i;
	}
	printf("\n");
	va_end(args);
}
