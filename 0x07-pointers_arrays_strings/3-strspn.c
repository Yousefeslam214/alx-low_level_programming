#include "main.h"
#include <string.h>

/**
 * _strspn -  Get the length of the initial substring
 * of the string pointed to by str1 that is made up of
 * only those character contained in the string pointed to by str2
 * @s: String That will be scaned
 * @accept: string containing the characters to match
 * Return: Returns the number of characters in the initial
 * segment of str1 which consist only of characters  from str2.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}
	if (*(accept + i) == '\0')
		break;
	}
	return (j);
}