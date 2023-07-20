#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (success)
 */

int main(void)
{
	char ch_lower, ch_upper;

	ch_lower = 97;
	ch_upper = 65;
	while (ch_upper < 91)
	{
		while (ch_lower < 123)
		{
			putchar(ch_lower);
			ch_lower++;
		}
		putchar(ch_upper);
		ch_upper++;
	}
	putchar('\n');
	return (0);
}
