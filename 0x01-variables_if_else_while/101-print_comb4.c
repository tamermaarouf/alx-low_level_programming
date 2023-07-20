#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int one, ten, hun;

	hun = 48;
	while (hun < 58)
	{
		ten = 49;
		while (ten < 58)
		{
			one = 50;
			while (one < 58)
			{
				if ((one > ten) && (ten > hun))
				{
					putchar(hun);
					putchar(ten);
					putchar(one);
					if ((one != 57) || (ten != 56) || (hun != 55))
					{
						putchar(',');
						putchar(' ');
					}
				}
				one++;
			}
			ten++;
		}
		hun++;
	}
	putchar('\n');
	return (0);
}
