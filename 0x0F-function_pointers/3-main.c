#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char **argv)
{
	int (*ptr_func)(int, int);
	int result = 0, a, b;
	char *s;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit (98);
	}
	s = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	ptr_func = get_op_func(s);
	result = ptr_func(a, b);
	printf("%d\n", result);
	return (0);
}
