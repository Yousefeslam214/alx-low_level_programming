#include "stdio.h"

/**
 * main - program that prints its name, followed by a new line.
 * @argc: count of arguments
 * @argv: parameter value
 * Return: Always 0.
 */

int main(int argc, char const *argv[])
{
	int i;

	(void)argc;
	for (i = 0; *argv; i++, argv++)
		printf("%s\n", argv[i]);
	return (0);
}
