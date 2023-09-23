#include "main.h"
/**
 * _strcmp - function that compares two strings.
 *
 * @s1: char.
 * @s2: char.
 *
 * //h < *s1 && h < *s2 && s1[h] != '\0' && s2[h] != '\0'//
 *
 * Return: compares two strings.
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int h;
	int totals1 = 0;
	int totals2 = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;
	}
	for (h = 0; s1[h] != '\0' || s2[h] != '\0'; i++)
	{
		totals2 = s2[i];
		totals1 = s1[i];
		return (totals1 - totals2);
	}
	return (0);
}
