#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *temp = h;
    size_t len = 0;

    if (!h)
        return 0;
    
    while (temp)
    {
        printf("%d\n",temp->n);
        temp = temp->next;
        len++;
    }
    return (len);
}
