#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: no return.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int flag = 0;

	va_start(args, format);
	while (format && format[i])
	{
		get_op_func(format[i], args, &flag);
		if ((flag) && (*(format + i + 1)))
			printf(", ");
		++i;
		flag = 0;
	}
	printf("\n");
	va_end(args);
}

/**
 * get_op_func - funtion get function to print
 * @s: list of type format
 * @ap: pionter too list
 * @fl: flag
 * Return: void
 */

void get_op_func(char s, va_list ap, int *fl)
{
	op_t ops[] = {
		{"c", print_char},
		{"i", print_digit},
		{"s", print_string},
		{"f", print_float},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if ((*(ops + i)->op) == s)
		{
			(ops + i)->f(ap);
			*fl = 1;
		}
		i++;
	}
}

void print_char(va_list arg) { printf("%c", va_arg(arg, int)); }
void print_digit(va_list arg) { printf("%d", va_arg(arg, int)); }
void print_string(va_list arg)
{
	char *_str = va_arg(arg, char *);

	switch (*_str)
	{
		case '\0':
			printf("(nil)");
			break;
		case (!_str):

		default:
			printf("%s", _str);
	}
}

void print_float(va_list arg) { printf("%f", va_arg(arg, double)); }
