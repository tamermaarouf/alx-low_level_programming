#include "main.h"

/**
 * more_numbers - print 10 times the number from 0 -> 14
 *
 * Return: Nothing.
 */

void more_numbers(void)
{
	int index, counter;

	for (index = 0; index < 10; ++index)
	{
		for (counter = 0; counter <= 14; ++counter)
		{
			if (counter > 9)
				_putchar((counter / 10) + 48);
			_putchar((counter % 10) + 48);
		}
		_putchar('\n');
	}
}
