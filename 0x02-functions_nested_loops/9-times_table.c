#include "main.h"

void times_table(void)
{
	int row, col, row_col;

	row = 0;
	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			row_col = row * col;
			if (col < 9)
			{
				if (row_col <= 9)
				{
					if (((col + 1) * row) <= 9)
					{
						_putchar(row_col + 48);
						_putchar(',');
		 				_putchar(' ');
						_putchar(' ');
					}
					else
					{
						_putchar(row_col + 48);
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					_putchar((row_col / 10) + 48);
					_putchar((row_col % 10) + 48);
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (row_col <= 9)
					_putchar(row_col + 48);
				else
				{
					_putchar((row_col / 10) + 48);
					_putchar((row_col % 10) + 48);
				}
			}
			col++;
		}
		_putchar('\n');
		++row;
	}
}
