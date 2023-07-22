#include <stdio.h>
#include "main.h"


void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int counter;

		counter = 0;
		while (counter <= n)
		{
			_putchar(95);
			++counter;
		}
		_putchar('\n');
	}
}
