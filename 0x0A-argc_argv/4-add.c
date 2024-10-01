#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - This program adds positive numbers
* @argc: Argument count
* @argv: Argument vector
* Return: 0 if success, 1 if error
**/
int main(int argc, char **argv)
{
	int sum;

	sum = 0;
	while (argc-- > 1)
	{
		if (!isdigit(*argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
