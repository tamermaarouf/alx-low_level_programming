#include "main.h"

void jack_bauer(void)
{
	int h_1, h_2, m_1, m_2;

	h_1 = 0;

	while(h_1 < 3)
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
					_putchar(h_1 + 48);
					_putchar(h_2 + 48);
					_putchar(58);
					_putchar(m_1 + 48);
					_putchar(m_2 + 48);
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
