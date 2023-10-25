#include "lists.h"

/**
 * get_nodeint_at_index - get the nth index node
 * @head: head of the list
 * @index: index of the node
 * Return: node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	for (i = 0; i< index; i++)
		temp = temp->next;
	return(temp);
}
