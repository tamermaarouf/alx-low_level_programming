#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (success)
 */

int main(void)
{
	char ch;

	ch = 122;
	while (ch > 96)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
