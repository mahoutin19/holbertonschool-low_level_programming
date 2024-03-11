#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array created by alloc_grid
 * @grid: a pointer to the first column of thr first row of the array
 * @height: the number of rows in the array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
