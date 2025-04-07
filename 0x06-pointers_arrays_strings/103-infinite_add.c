#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * infinite_add - a function that adds two numbers.
 *
 * @n1: number
 * @n2: number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: returns a pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index_n1, len_n1 = 0, len_n2 = 0, sum = 0, a = 0, b, reminder = 0;

	len_n1 = _strlen(n1);
	len_n2 = _strlen(n2);
	if (len_n1 >= len_n2)
		index_n1 = len_n1;
	else
		index_n1 = len_n2;
	if ((index_n1 + 1) >= size_r)
		return (0);
	r[index_n1 + 1] = '\0';
	len_n1 -= 1, len_n2 -= 1;
	while (index_n1 >= 0)
	{
		a = n1[len_n1];
		b = n2[len_n2];
		if ((len_n1 >= 0) && (len_n2 >= 0))
			sum = (a - 48) + (b - 48) + reminder;
		else if (len_n1 >= 0 && len_n2 < 0)
			sum = (a - 48) + reminder;
		else if (len_n1 < 0 && len_n2 >= 0)
			sum = (b - 48) + reminder;
		else
			sum = reminder;
		if (sum > 9)
		{
			reminder = sum / 10;
			sum = ((sum % 10) + 48);
		}
		else
		{
			reminder = 0;
			sum = (sum + 48);
		}
		r[index_n1] = sum;
		len_n1--, len_n2--, index_n1--;
	}
	if (*r != 0)
		return (r);
	else
		return (r + 1);
}

/**
 * _strlen - calculates the length of a string point to by s.
 * @s: pointer to string for calculates
 *
 * Return: returns the number of bytes in the string pointed to by s.
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s++)
		++length;
	return (length);
}
