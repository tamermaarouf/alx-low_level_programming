#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - This program adds positive numbers
* @argc: Argument count
* @argv: Argument vector
* Return: 0 if success, 1 if error
**/
int main(int argc, char **argv)
{
	int sum, positive_num;

	sum = 0;
	while (argc-- > 1)
	{
		positive_num = 0;
		if (*argv[argc] < 48 || *argv[argc] > 57)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			positive_num = atoi(argv[argc]);
		}
		sum += positive_num;
	}
	printf("%i\n", sum);
	return (0);
}
