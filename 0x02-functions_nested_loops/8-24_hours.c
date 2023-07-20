#include "main.h"

void jack_bauer(void)
{
	char h_1, h_2, m_1, m_2;

	h_1 = 48;

	while(h_1 < 51)
	{
		h_2 = 48;
		while (h_2 < 52)
		{
			m_1 = 48;
			while (m_1 < 54)
			{
				m_2 = 48;
				while (m_2 <= 57)
				{
					_putchar(h_1);
					_putchar(h_2);
					_putchar(58);
					_putchar(m_1);
					_putchar(m_2);
					_putchar('\n');
					m_2++;
				}
				m_1++;
			}
			h_2++;
		}
		h_1++;
	}
}
