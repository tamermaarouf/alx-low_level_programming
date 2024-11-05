#include "variadic_functions.h"
#include <string.h>

void print_char(int);
void print_digit(int);
void print_str(char *);
void print_float(double);

void get_op_func(char s, va_list ap, int *fl)
{
	switch(s)
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
		if ((flag) && (*(format + i + 1) != '\0')) { printf(", "); }
		++i;
	}
	va_end(args);
	printf("\n");
}

void print_char(int c)
{
	printf("%c", c);
}
void print_str(char *s)
{
	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
void print_digit(int a)
{
	printf("%i", a);
}
void print_float(double d)
{
    printf("%f", d);
}
