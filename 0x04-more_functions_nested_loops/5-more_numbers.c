#include "main.h"

void more_numbers(void)
{
	int index, counter;

	for (index = 0; index < 10; ++index)
	{
		for (counter = 0; counter <= 14; ++counter)
		{
			if (counter <= 9)
				_putchar(counter + 48);
			else
			{
				_putchar((counter / 10) + 48);
				_putchar((counter % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
