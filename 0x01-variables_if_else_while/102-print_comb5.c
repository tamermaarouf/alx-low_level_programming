#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int one, ten, hun, tho;

	tho = 48;
	while (tho < 58)
	{
		hun = 48;
		while (hun < 58)
		{
			ten = tho;
			while (ten < 58)
			{
				one = hun + 1;
				while (one < 58)
				{
					putchar(tho);
					putchar(hun);
					putchar(' ');
					putchar(ten);
					putchar(one);
					if (tho != 57 || ten != 57 || hun != 56 || one != 57)
					{
						putchar(',');
						putchar(' ');
					}
					one++;
				}
				ten++;
			}
			hun++;
		}
		tho++;
	}
	putchar('\n');
	return (0);
}
