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

/*
https://www.youtube.com/watch?v=80pnhhHGpWc&
ab_channel=%D9%85%D8%AD%D9%85%D8%
AF%D8%A7%D9%84%D8%AF%D8%B3%D9%88%
D9%82%D9%89
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(size_t));
	if (!head || !newNode)
		return(NULL);
	if(str)
	{
		newNode->str = strdup(str);
		if(!newNode->str)
		{
			free(newNode);
			return(NULL);
		}
		newNode->len = strlen(str);
	}
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
