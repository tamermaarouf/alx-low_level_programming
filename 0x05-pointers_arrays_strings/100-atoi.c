#include "main.h"
#include <stdio.h>
#include <ctype.h>

int _atoi(char *s)
{
	int i, n, sign;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
	{
		sign = (s[i] == '-') ? -1 : 1;
		if (s[i] == '+' || s[i] == '-')
			++i;
		else if(isspace(s[i]))
			++i;
		else if (isdigit(s[i]))
			n = 10 * n + (s[i] - '0');
	}
	return (sign * n);
}
