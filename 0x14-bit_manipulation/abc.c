// C program to demonstrate conversion of
// char to int using atoi()
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Driver code

int _pow(int x, int y)
{
	int i, sum = 0;
    x = 2;
    y = 3;

	for (i = 0; i < y; i++)
    {
		sum = x * sum;
        printf("---%d\n", sum);
    }
	return (sum);
}

int main()
{
    int i, sum = 1, x ,y;
    x = 2;
    y = 3;

	for (i = 0; i < y; i++)
    {
		sum = x * sum;
        printf("---%d\n", sum);
    }
    printf("%d\n", sum);
	return (sum);
}
