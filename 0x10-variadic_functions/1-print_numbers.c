#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Entry Point
 * @n: variadic inputs
 * Return: sum
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
    int i;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	
	for (i = 0; i < (int)n; i++)
    {
        printf("%d",va_arg(args, int));
        if (i == (int)(n -1))
            break;
        printf("%s",separator);
    }

    printf("\n");
	va_end(args);
}
