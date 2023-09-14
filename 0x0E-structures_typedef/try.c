// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("Hello world\n");
    int x = 7;
    int *address = &x;
    printf("%d",x);
    *address = 4;
    
    printf("%p",*address);
    printf("%d",x);

    return 0;
}