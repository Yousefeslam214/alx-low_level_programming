#include <stdio.h>
#include "main.h"

/**
 * print_line - function that draws a straight line
 * in the terminal.
 *
 * @n: is the number of times the character _ should be printed
 * Return: returns nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		_putchar('_');
	_putchar('\n');
}
