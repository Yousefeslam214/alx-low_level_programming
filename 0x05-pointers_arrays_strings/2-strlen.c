#include <stdio.h>
#include "main.h"
/**
 * _strlen - function that returns the
 * length of a string.
 *
 * @s: char
 *
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);

}
