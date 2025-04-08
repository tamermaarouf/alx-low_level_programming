#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a: pointer to 2d array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int col, row;

	row = 0;
	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			printf("%c", a[row][col]);
			col++;
		}
		printf("\n");
		row++;
	}
}
