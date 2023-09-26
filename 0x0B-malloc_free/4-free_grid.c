#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid -  function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @height: int.
 * @grid: int.
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