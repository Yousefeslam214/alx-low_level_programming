#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints strings, followed by a new line.
 * @separator:  string to be printed between the strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("%s", "(nill)");
		printf("%d", va_arg(args, int));
		if (i == n - 1)
			break;
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
