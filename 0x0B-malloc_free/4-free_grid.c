#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d integer grid previously created by alloc_grid
 * @grid: double pointer to the 2d array
 * @height: number of rows for the 2d array
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
