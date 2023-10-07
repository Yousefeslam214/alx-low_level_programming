#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - function that creates
 * an array of integers.
 *
 * @min: int.
 * @max: int.
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *m;
	int arrLen, j;

	if (min > max)
		return (NULL);
	arrLen = max - min + 1;
	m = malloc(sizeof(int) * arrLen);
	if (!m)
		return (NULL);
	for (j = 0; j < arrLen; j++)
		m[j] = min++;
	return (m);
}
