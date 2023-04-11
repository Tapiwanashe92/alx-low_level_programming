#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - frees a 2 dimensional grid previously created by alloc_grid
* @grid: a pointer to pointer
* @height: height of the grid
**/

void free_grid(int **grid, int height)
{
	int b;

	if (grid == NULL)
		return;
	for (b = 0; b < height; b += 1)
		free(grid[b]);
	free(grid);
}
