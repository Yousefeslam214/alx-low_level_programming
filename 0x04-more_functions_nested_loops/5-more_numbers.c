#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that print all numbers from
 * 0 to 9
 *
 * Return: returns nothing
 */

void more_numbers(void)
{
	int number , i;
	for (number =0;number<10;number++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0';
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
