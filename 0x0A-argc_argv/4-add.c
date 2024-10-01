#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers.
 * @argc: count of argument
 * @argv: value of argument
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sum, i;

	sum = 0;
	i = 0;
	if (argc < 2)
	{
		printf("%c\n", 48);
		return (0);
	}
	while (argc-- >= 2)
	{
		i = atoi(argv[argc]);
		if ((*argv[argc] < '0') || (*argv[argc] > '9'))
		{
			printf("Error\n");
			return (1);
		}
		sum += i;
	}
	printf("sum= :%i\n", sum);
	return (0);
}
