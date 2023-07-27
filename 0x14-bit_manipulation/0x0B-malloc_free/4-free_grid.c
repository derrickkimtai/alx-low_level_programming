#include "main.h"
/**
 *free_grid - frees the previous grid
 *@grid: it is a grid of zero
 *@height: hright in the row
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
