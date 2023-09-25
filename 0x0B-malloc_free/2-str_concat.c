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
	int i, j = 0;
	int len, len1, len2;
	char *ptr = NULL;

	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	len = len1 + len2;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = len1; i < len; i++)
	{
		ptr[i] = s2[j];
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
