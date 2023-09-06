#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - conctinate two strings
 * @s1:first string
 * @s2:secound string
 * Return:ptr (s1 + s2)
 */

int **alloc_grid(int width, int height)
{
	int **matrix, a, b;

	if (width < 1 || height < 1)
		return (NULL);
	matrix = malloc(sizeof(int *) * height);
	if (matrix == 0)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		matrix[a] = malloc(width * sizeof(int));
		if (matrix[a] == 0)
		{
			for (b = 0; b < a; b++)
				free(matrix[b]);
			free(matrix);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			matrix[a][b] = 0;
	}
	return (matrix);
}
