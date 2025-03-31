#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* main - this program adds positive numbers
* @argc: argument count
* @argv: argument vector for value
* Return: alawys return 0 if success, 1 if error.
**/

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc < 2)
		printf("0\n");
	else
	{
		while (argc-- > 1)
		{
			if (!(isdigit(*argv[argc])))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum +=  atoi(argv[argc]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
