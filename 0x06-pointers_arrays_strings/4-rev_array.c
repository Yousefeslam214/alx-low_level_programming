#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: array of int.
 * @s2: number of elmente in array.
 *
*/
void reverse_array(int *a, int n)
{
	char temp;
	int began;
	int last;

	for (began = 0, last = n - 1; began < n / 2; began++, last--)
	{
		temp = a[began];
		a[began] = a[last];
		a[last] = temp;
	}
}
