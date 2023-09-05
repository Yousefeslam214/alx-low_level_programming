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

int main(int argc, char const *argv[])
{
	int i;

	(void)argc;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
