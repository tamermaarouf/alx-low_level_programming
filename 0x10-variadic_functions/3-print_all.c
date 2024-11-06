#include "variadic_functions.h"
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	void (*f)(va_list);
} op_t;

void get_op_func(char, va_list, int *);
void print_char(va_list);
void print_digit(va_list);
void print_string(va_list);
void print_float(va_list);

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
		if (*(ops + i)->op == s)
		{
			(ops + i)->f(ap);
			*fl = 1;
		}
		i++;
	}
}

void print_char(va_list c) { printf("%c", va_arg(c, int)); }
void print_digit(va_list d) { printf("%i", va_arg(d, int)); }
void print_string(va_list str)
{
	char *_str = va_arg(str, char *);

	switch (*_str)
	{
		case '\0':
			printf("(nil)");
			break;
		default:
			printf("%s", _str);
	}
}

void print_float(va_list fl) { printf("%f", va_arg(fl, double)); }
