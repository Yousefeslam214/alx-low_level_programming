#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _pow - power
 * @x: base
 * @y: power
 * Return: x power y
 */
int _pow(int x, int y)
{
	int i, sum = 1;

	for (i = 1; i < y; i++)
	{
		sum = x * sum;
	}
	return (sum);
}
/**
 * check_string - Checks if a string contains anything else
 * other than 0 and 1.
 * @str: A pointer to the string to be checked.
 * Return: 1 if the string contains only 0 and 1, 0 otherwise.
 */
int check_string(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != '0' && str[i] != '1')
			return (0);
	}
	return (1);
}

/**
 * binary_to_uint - convert a binary to unsigned int
 * @b: string contains 0's and 1's
 * Return: unsigned int of binary
*/
 unsigned int binary_to_uint(const char *b)
{
	int digit, index, total = 1, sum = 0, po;
	if ((check_string(b)) == 0)
	{
		return(0);
	}
	if (!b)
		return (0);
	digit = (atoi)(b);
	while (digit)
	{
		index = digit % 10;
		digit /= 10;
		po = (_pow((2),(total)));
		sum += (index * po);
		total++;
	}
	return((unsigned int)sum);
}
