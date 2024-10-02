#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void free_grid(int **grid, int height)
{
	int **ptr_grid, index;

	ptr_grid = grid;
	if (ptr_grid == NULL)
		free(ptr_grid);
	index = 0;
	while (index < height)
	{
		free(*(ptr_grid + index));
		index++;
	}
	free(ptr_grid);	
}
