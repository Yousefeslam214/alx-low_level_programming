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

	for (i = 0; i < argc; i++)
		printf("%d\n", argv[i]);
	return (0);
}
