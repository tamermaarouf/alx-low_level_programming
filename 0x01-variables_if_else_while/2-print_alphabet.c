#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (success)
 */

int main(void)
{
	int ch;

	ch = 97;
	while (ch < 123)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
