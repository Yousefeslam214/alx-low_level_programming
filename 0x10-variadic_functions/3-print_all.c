#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: format.
 * Return: nothing.
*/

void print_all(const char * const format, ...)
{
	unsigned int i = 0,n = 0;
	char *sep, *str;
	va_list args;

	va_start(args, format);
	sep = ", ";
	while (format && format[i])
	{
		i++;
	}
	while (format && format[i])
	{
		if (n == (i - 1))
			sep = "";
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(args, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), sep);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(args);
}
