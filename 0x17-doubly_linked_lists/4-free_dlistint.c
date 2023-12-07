#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: list
 * Return:void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
