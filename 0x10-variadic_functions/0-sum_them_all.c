#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, x, sum = 0;
	va_list args;
	va_start (args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	return (sum);
}
