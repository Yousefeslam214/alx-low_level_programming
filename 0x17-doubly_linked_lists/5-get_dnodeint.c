#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: list
 * @index: the place of node
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = 0;

	if (!head)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	while (head)
	{
		if (len == index)
			return (head);
		head = head->next;
		len++;
	}
	return (NULL);
}
