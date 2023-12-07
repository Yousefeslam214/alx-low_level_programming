#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a specific index
 * @h: pointer to the head of the node
 * @idx: idx in which the node will be inserted
 * @n: data of the node
 * Return: pointer to the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *temp = *h;
    dlistint_t *newNode;
    newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
    unsigned int len = 0;
    if (!newNode || !temp)
    {
        free(newNode);
        return (NULL);
    }
    newNode->n = n;
/*    if (idx < 0 || idx > len)
        return (NULL);*/
	if (idx == 0)
    {
        free(newNode);
        return (add_dnodeint(h, n));
    }
for (len = 0; len < idx - 1 && temp; len++)
		temp = temp->next;
	if (!temp)
	{
		free(newNode);
		return (NULL);
	}
    if (!temp->next)
    {
        free(newNode);
        return (add_dnodeint_end(h, n));
    }
        /*newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
        temp->next->prev = newNode;*/
        /*newNode->next = temp->next->next;
        temp->next = newNode;
        newNode->prev = temp;
        temp->next->next->prev = newNode;*/
        newNode->next = temp->next;
	    temp->next = newNode;
	    newNode->next->prev = newNode;
	    newNode->prev = temp;

    return newNode;
}
