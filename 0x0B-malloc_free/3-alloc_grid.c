#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Each element of the grid should be initialized to 0
 * @width: size of row
 * @height: size of column
 * Return: returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int col, row, **ptr_row;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	ptr_row = (int **)malloc(sizeof(int *) * height);
	if (ptr_row == NULL)
	{
		free(ptr_row);
		return (NULL);
	}
	row = 0;
	while (row < height)
	{
		*(ptr_row + row) = (int *)malloc(sizeof(int) * width);
		if (*(ptr_row + row) == NULL)
		{
			while (row >= 0)
			{
				free(*(ptr_row + row));
				row--;
			}
			free(ptr_row);
			return (NULL);
		}
		row++;
	}
	row = 0;
	while (row < height)
	{
		col = 0;
		while (col < width)
		{
			*(*(ptr_row + row) + col)  = 0;
			col++;
		}
		row++;
	}
	return (ptr_row);
}
