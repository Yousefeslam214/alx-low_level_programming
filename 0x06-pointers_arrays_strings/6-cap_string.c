#include "main.h"
/**
 * string_toupper - function that changes all
 * lowercase letters
 * of a string to uppercase.
 *
 * @in: array of char.
 * Return: string of uppercase.
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
