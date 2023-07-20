/*
 * File: 2-print_alphabet_x10.c
 * Auth: Tamer Maarouf
 */

#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabet, in lowercas.
 */

void print_alphabet_x10(void)
{
	char ch;
	int counter = 0;

	while (counter < 10)
	{
		ch = 97;
		while (ch < 123)
		{
			_putchar(ch);
			ch++;
		}
		counter++;
		_putchar('\n');
	}
}
