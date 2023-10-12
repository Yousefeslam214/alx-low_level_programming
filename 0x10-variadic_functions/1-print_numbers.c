#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: separator.
 * @n: number of parameter.
 * Return: nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, x;
	char *sep;
	va_list args;

	va_start(args, n);
	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *)separator;
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (i + 1 != n)
			printf("%s", sep);
	}
	printf("\n");
	va_end(args);
}
