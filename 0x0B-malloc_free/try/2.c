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
    int *B = (int*)realloc(A, 2*n*sizeof(int));
    //int *A = (int*)realloc(A, 0);  equivalent to free(A)
    //int *B = (int*)realloc(NULL, n*sizeof(int));  equivalent to malloc
    printf("Prev block address = %d, new address = %d\n", A, B);
    for (int i = 0; i < 2 * n; i++)
        printf("%d\n",B[i]);
}
