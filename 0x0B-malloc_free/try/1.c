#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int *A = (int*)malloc(n*sizeof(int)); // carbage value
    //dynamically allocated array
    //int *A = (int*)calloc(n,sizeof(int)); // 0 0 0 0 0 0 0 0 0 0 0
    for (int i = 0; i < n; i++)
        A[i] = i + 1;
    free(A);
    for (int i = 0; i < n; i++)
        printf("%d ",A[i]);
    printf("\n");
}