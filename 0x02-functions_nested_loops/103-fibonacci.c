#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (success)
 */

int main(void)
{
	long int n1, n2, sum;

	bool flag;

	n1 = 1;
	n2 = 2;
	sum = n1 + n2;
	flag = true;
	while (flag)
	{
		if (sum >= 4000000)
			flag = false;
		else
		{
			if (sum % 2 == 0)
			{
				printf("%lu \n", sum);
				n1 = n2;
				n2 = sum;
				sum = n1 + n2;
			}
			else
			{
				n1 = n2;
				n2 = sum;
				sum = n1 + n2;
			}
		}
	}
	return (0);
}
