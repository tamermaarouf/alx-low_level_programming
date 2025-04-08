#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: pointer to 2D array
 * @size: size of 2D array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int row, col, k, j = 0, sum_1 = 0, sum_2 = 0;

	row = 0;
	k = size - 1;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			if (row == col)
				sum_1 += a[j];
			if (col == k)
				sum_2 += a[j];
			col++;
			j++;
		}
		k--;
		row++;
	}
	printf("%d, %d\n", sum_1, sum_2);
}
