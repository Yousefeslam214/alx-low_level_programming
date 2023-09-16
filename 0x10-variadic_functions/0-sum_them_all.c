#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, sum;

	if (!n)
		return (0);

	va_start (args, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg (args, int);

	va_end (args);
	return (sum);
}
