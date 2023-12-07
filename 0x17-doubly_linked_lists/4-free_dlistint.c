#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: list
 * Return:void
 */

void free_dlistint(dlistint_t *head)
{
	while (head->prev)
	{
		head = head->prev;
	}
	
	while (head)
	{
		free(head);
		head = head->next;
	}
}
