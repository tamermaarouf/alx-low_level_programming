#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - this program adds positive numbers
* @argc: argument count
* @argv: argument vector for value
* Return: alawys return 0 if success, 1 if error.
**/

int main(int argc, char *argv[])
{
	int sum, positive_num = 0;

	sum = 0;
	if (argc > 1)
	{
		while (argc-- > 1)
		{
			if (*argv[argc] < 48 || *argv[argc] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		positive_num =  atoi(argv[argc]);
		sum += positive_num;
		printf("%i\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
