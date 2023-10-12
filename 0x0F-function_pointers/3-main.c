#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - main fun.
 * @argc:count of parameters
 * @argv:the parameter
 * Return: int.
*/

int main(int argc, char *argv[])
{
	int finalRes;

	finalRes = get_op_func(argv[2]) (atoi(argv[1]), atoi(argv[3]));
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][1] != 0) || ((argv[2][0] != '+') &&  (argv[2][0] != '-')
		&& (argv[2][0] != '*') && (argv[2][0] != '/') && (argv[2][0] != '%')))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || (argv[2][0] == '%')) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", finalRes);
	return (0);
}
