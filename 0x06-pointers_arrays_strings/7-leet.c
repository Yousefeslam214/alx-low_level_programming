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
	int j, i = 0;
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";

	while (in[i] != '\0')
	{
		for (j = 0; j <= 9; j++)
				if (in[i] == a[j])
					in[i] = n[j];
		++i;
	}
	return (in);
}
