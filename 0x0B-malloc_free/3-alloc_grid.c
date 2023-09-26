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

int **alloc_grid(int width, int height)
{
	int i, b;
	int **ptr;

	if (!width || !height)
		return (NULL);
	ptr = (int **)malloc((height) * sizeof(int *));
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == 0)
		{
			for (b = 0; b < i; b++)
				free(ptr[b]);
			free(ptr);
			return (NULL);
		}
	}
	return (ptr);
}
