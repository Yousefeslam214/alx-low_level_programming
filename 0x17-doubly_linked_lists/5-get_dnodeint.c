#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: list
 * Return:void
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = 0;
	if (!head)
		return NULL;
	while (head->prev != NULL)
		head = head->prev;
	while (head)
	{
		if (len == index)
			return head;
		head = head->next;
		len++;
	}
	return NULL;
}
