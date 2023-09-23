#include <stdio.h>
#include <stdlib.h>

int main (int argc __attribute__((unused)), char *argv[] )
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	for(i = 1; i < argc; i++)
	{
		if (argv[i][0] >='0' && argv[i][0] <= '9')
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
		printf("%d\n", sum);

	return (0);
}
