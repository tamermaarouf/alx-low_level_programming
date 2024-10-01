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
	int sum;

	sum = 0;
	while (argc-- >= 2)
	{
		if ((*argv[argc] < '0') || (*argv[argc] > '9'))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
