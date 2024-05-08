#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers.
 *
 * @min: int.
 * @max: int.
 * Return: ptr.
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = (int *)malloc(sizeof(int) * (max - min) + sizeof(int));
	if (ptr == 0)
		return (NULL);
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
