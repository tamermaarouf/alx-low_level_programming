#include "3-calc.h"
/**
 * main - Write a program that performs simple operations.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int (*ptr_func)(int, int);
	int result = 0, a, b;
	char *s;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("%s\n", "Error");
		exit(99);
	}
	s = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	ptr_func = get_op_func(s);
	if (ptr_func == NULL)
	{
		printf("%s\n", "Error");
		exit(99);
	}

	result = ptr_func(a, b);
	printf("%d\n", result);
	return (0);
}
