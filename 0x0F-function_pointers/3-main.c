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
	int n1, n2;
	char *op;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	n1 = atoi(argv[1]);
	op = argv[2];
	n2 = atoi(argv[3]);

	if (op[1] != '\0' || get_op_func(op) == NULL)
	{
		printf("%s\n", "Error");
		exit(99);
	}
	if ((*op == '/' && n2 == 0) || (*op == '%' && n2 == 0))
	{
		printf("%s\n", "Error");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(n1, n2));
	return (0);
}
