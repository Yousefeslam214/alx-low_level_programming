#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: int.
 * @size: int.
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
	while(min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
