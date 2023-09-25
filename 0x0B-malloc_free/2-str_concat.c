#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: char.
 * @s2: char.
 * Return: char.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j = 0, len1, len;
	char *A;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len = (int)(strlen(s1) + strlen(s2));
	len1 = (int)strlen(s1);
	A = malloc(sizeof(char) * (len + 1));
	if (A == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		A[i] = s1[i];
	for (i = len1; i < len; i++)
	{
		A[i] = s2[j];
		j++;
	}
	A[i] = '\0';
	return (A);
}
