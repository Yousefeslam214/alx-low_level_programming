#include "main.h"
/**
 * leet - function that encodes a
 * string into 1337.
 *
 * @in: array of char.
 * Return: string.
*/
char *leet(char *in)
{
	int i = 0;

	while (in[i] != '\0')
	{
		if (in[i] == 'a' || in[i] == 'A')
			in[i] = '4';
		else if (in[i] == 'e' || in[i] == 'E')
			in[i] = '3';
		else if (in[i] == 'o' || in[i] == 'O')
			in[i] = '0';
		else if (in[i] == 't' || in[i] == 'T')
			in[i] = '7';
		else if (in[i] == 'l' || in[i] == 'L')
			in[i] = '1';
		++i;
	}
	return (in);
}
