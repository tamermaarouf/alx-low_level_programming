#include "main.h"


/**
  * jack_bauer - Prints every minute of the day of Jack Bauer
  *
  * Return: ...
  */

void jack_bauer(void)
{
	int h_1, h_2, m_1, m_2;

	h_1 = 0;

	while (h_1 < 3)
	{
		h_2 = 0;
		while (h_2 < 4)
		{
			m_1 = 0;
			while (m_1 < 6)
			{
				m_2 = 0;
				while (m_2 <= 9)
				{
					_putchar(48 + h_1);
					_putchar(48 + h_2);
					_putchar(':');
					_putchar(48 + m_1);
					_putchar(48 + m_2);
					_putchar('\n');
					++m_2;
				}
				++m_1;
			}
			++h_2;
		}
		++h_1;
	}
}
