#include <stdio.h>
#include "main.h"
/**
 * _puts - function that prints a string,
 * followed by a new line, to stdout.
 *
 * @str: char
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}
