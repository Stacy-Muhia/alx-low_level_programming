#include "main.h"
#include <stdlib.h>

/**
 *free_grid - function that frees a 2D grid.
 *@grid: The 2D grid being freed
 *@height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height <= 0)
		return;

	for (x = 0; x < height; x++)
	{
		if (grid[x] != NULL)
			free(grid[x]);
	}

	free(grid);
}
