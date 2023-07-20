#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int num, ch;

	num = 48;
	ch = 97;
	while (ch < 103)
	{
		while (num < 58)
		{
			putchar(num);
			num++;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
