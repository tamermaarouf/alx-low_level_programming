#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: count of argument
 * @argv: value of argument
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int mulu = 0;

	mulu = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", mulu);
	return (0);
}
