#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of the list
 * @idx: position of new node
 * @n: number stored in the new node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int i = 0;
	if (!newNode || !head)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return(newNode);
	}

	for (i = 1; i <= idx; i++)
	{
		temp = temp->next;
		if(i == idx)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return(newNode);
		}
	}
	return (NULL);
}
