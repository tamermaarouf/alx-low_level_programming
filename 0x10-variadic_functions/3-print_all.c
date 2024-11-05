#include "variadic_functions.h"
#include <string.h>

void print_char(int);
void print_digit(int);
void print_str(char *);
void print_float(double);

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
			print_char(va_arg(ap, int));
			*fl = 1;
			break;
		case 'i':
			print_digit(va_arg(ap, int));
			*fl = 1;
			break;
		case 's':
			print_str(va_arg(ap, char *));
			*fl = 1;
			break;
        case 'f':
            print_float(va_arg(ap, double));
            *fl = 1;
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
	while (*(format + i) != '\0')
	{
		s = *(format + i);
		get_op_func(s, args, &flag);
		if ((flag) && (*(format + i + 1) != '\0')) 
            printf(", ");
		++i;
	}
	va_end(args);
	printf("\n");
}
/**
 * print_char - print character.
 * @c: char to rint
 * Return: void
 */

void print_char(int c)
{
	printf("%c", c);
}
/**
 * print_str - print string
 * @s: param to print string
 * Return: void
 */

void print_str(char *s)
{
	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_digit - print integer
 * @a: param print
 * Retrun: void
 */

void print_digit(int a)
{
	printf("%i", a);
}
/**
 * print_float - print float number
 * @d: param to print 
 * Return: void
 */

void print_float(double d)
{
    printf("%f", d);
}
