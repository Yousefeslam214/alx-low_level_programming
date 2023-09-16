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
	unsigned int i;


	va_start(args, n);

	
	for (i = 0; i < n; i++)
        if (i != n -1)
            printf("%d%s ",va_arg(args, int),separator);
                

    printf("\n");
	va_end(args);
}
