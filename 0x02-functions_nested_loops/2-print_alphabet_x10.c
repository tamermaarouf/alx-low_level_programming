#include <stdio.h>
#include "main.h"
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
