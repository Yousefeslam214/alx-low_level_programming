#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: char.
 * @s2: char.
 * Return: char.
 */

int **alloc_grid(int width, int height)
{
	int i, b;
	int **ptr = NULL;

	if (!width || !height)
		return (NULL);
	ptr = (int **)calloc((height), sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		{
			ptr[i] =(int *)calloc((width), sizeof(int));
			if (ptr[i] == 0)
			{
				for (b = 0; b < i; b++)
					free(ptr[b]);
				free(ptr);
				return (NULL);
			}
		for (b = 0; b < width; b++)
			ptr[i][b] = 0;
		}
	return (ptr);
}
