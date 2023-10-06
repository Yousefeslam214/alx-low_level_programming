#include <stdio.h>
#include "main.h"

/**
 * print_square - function that prints
 * a square, followed by a new line.
 *
 * @size:  is the size of the square
 *
 * Return: returns nothing
 */

void print_square(int size)
{
	int i, h;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (i = 0 ; i < size ; i++)
	{
		for (h = 0 ; h < size ; h++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
