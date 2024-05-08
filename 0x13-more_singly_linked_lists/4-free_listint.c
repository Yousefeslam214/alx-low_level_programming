#include "lists.h"
#include <string.h>

/**
 * free_listint - free list
 * @head:the List
 * Return:nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
