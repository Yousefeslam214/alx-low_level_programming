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

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));
	struct list_s *temp = *head;
	if(!newNode)
		return (NULL);
	if(str)
	{
		newNode->str = strdup(str);
		newNode->len = strlen(str);
		newNode->next = NULL;
		if(!newNode->str)
		{
			free(newNode);
			return(NULL);
		}
		if(!temp)
		{
			*head = newNode;
			return(newNode);
		}
		else
		{
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = newNode;
			return(newNode);
		}
	}
	free(newNode);
	return(NULL);
}