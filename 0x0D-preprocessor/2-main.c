#include <stdio.h>

/**
 * main - program that prints the name of the file it was compiled from,
 * followed by a new line.
 *
 * Return: int.
*/

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
