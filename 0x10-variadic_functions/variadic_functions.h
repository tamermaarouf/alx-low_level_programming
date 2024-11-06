#ifndef variadic_functions_h
#define variadic_functions_h
#include <stdio.h>
#include <stdarg.h>
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

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list);
void print_digit(va_list);
void print_string(va_list);
void print_float(va_list);
#endif
