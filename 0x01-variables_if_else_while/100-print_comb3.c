#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int one, ten;

	ten = 48;
	while (ten < 58)
	{
		one = 49;
		while (one < 58)
		{
			if (one > ten)
			{
				putchar(ten);
				putchar(one);
				if ((one != 57) || (ten != 56))
				{
					putchar(',');
					putchar(' ');
				}
			}
			one++;
		}
		ten++;
	}
	putchar('\n');
	return (0);
}
