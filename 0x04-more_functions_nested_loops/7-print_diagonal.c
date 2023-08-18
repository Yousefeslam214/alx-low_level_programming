#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - function that
 * draws a diagonal line on the terminal
 *
 * @n:  is the number of times the
 * character \ should be printed
 *
 * Return: returns nothing
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		putchar(' ');
	putchar('\\');
	putchar('\n');
}

