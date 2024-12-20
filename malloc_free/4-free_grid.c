#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2D grid
* @grid: The grid
* @height: the height of the grid
*
* NULL
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
