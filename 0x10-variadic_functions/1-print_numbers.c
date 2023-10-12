#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that prints numbers, followed by a new line.
 * @separator: separator.
 * @n: number of parameter.
 * Return: nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, x;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d",x);
		if (i + 1!= n)
			printf("%s ",separator);
	}
	printf("\n");
}
