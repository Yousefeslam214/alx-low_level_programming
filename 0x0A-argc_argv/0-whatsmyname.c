#include "stdio.h"

/**
 * main - program that prints its name, followed by a new line.
 * argc: count of arguments
 * argv: parameter value
 * Return: Always 0.
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
    return (0);
}