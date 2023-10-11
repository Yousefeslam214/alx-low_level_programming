#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Add(int a, int b)
{
    return a + b;
}

void printHello(char *name)
{
    printf("Hello %s\n", name);
}
int main()
{
    int c;
    int (*p)(int, int);

    p = &Add; // Add = &Add
    c = (*p)(2, 3); // de-referencing and executing the function.
    printf("%d\n", c);



    void (*ptr)(char *);
    ptr = printHello;
    ptr("yousef ,");
}