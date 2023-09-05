#include "stdio.h"

/**
 * main - program that prints the
 * number of arguments passed into it.
 *
 * @argc: count of arguments.
 * @argv: parameter value.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}
	return (0);
}
