#include "main.h"
/**
 * reverse_array - function that reverses the content of
 * an array of integers.
 *
 * @a: array of int.
 * @n: number of elmente in array.
*/
char *string_toupper(char *in)
{
	int i = 0;
	int asci = 'a' - 'A';

	while (in[i] != '\0')
	{
		if (in[i] >= 'a' && in[i] <= 'z')
		{
		in[i] = in[i] - asci;
		}
		i++;
	}
	return (in);
}
