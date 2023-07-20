#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (success)
 */

int main(void)
{
	char ch;

	ch = 97;
	while (ch < 123)
	{
		if (ch != 101)
			if (ch != 113)
				putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
