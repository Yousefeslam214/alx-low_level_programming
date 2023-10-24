#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - delete the list fron the heap
 * @head: head of the list
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp)
	{
		head = head->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
}
