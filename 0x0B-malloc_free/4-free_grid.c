#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: int.
 * @height: int.
 * Return: int.
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
