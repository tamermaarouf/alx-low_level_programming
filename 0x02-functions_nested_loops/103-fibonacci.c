#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (success)
 */

int main(void)
{
	long int n1, n2, sum, t_sum;

	bool flag;

	n1 = 0;
	n2 = 1;
	t_sum = n1 + n2;
	sum = 0;
	flag = true;
	while (flag)
	{
		n1 = n2;
		n2 = t_sum;
		t_sum = n1 + n2;
		if (sum > 4000000)
			flag = false;
		else if (t_sum % 2 == 0)
			sum += t_sum;
	}
	printf("%ld\n", sum);
	return (0);
}
