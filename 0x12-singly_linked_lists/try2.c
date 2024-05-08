#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

void count_of_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("linked list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("%d\n", count);
}

/*check picture "try2.png"*/
/* function count how many of node in single linked list */
int main ()
{
    count_of_nodes(head);
    
    return(0);
}
