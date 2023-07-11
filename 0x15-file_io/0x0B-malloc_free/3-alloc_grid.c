#include "main.h"
/**
 *
 *
 *
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <=  0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(width * sizeof(int *));
	{
		if (grid == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < width; i++)
		{
			grid[i] = (int *)malloc(height * sizeof(int));
			if (grid[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(grid[j]);
				}
				free(grid);
				return (NULL);
			}
			for (j = 0; j < height; j++)
			{
				grid[i][j];
			}
		}
		return (grid);
}
