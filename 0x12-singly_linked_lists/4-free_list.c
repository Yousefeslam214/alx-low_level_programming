#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * list_len -  function that adds a new node at
 * the beginning of a list_t list.
 * @head: LinkedList
 * @str: string
 * Return: the address of the new element,
 * or NULL if it failed
 */

void free_list(list_t *head)
{
	list_t *p = head;

	while (p)
	{
		head = head->next;
		free(p->str);
		free(p);
		p = head;
	}
}
