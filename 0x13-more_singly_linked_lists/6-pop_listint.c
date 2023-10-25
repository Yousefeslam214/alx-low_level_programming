#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: head of the list
 * Return: head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data = (*head)->n;

	if (!head || !*head)
		return (0);
	*head = (*head)->next;
	free(temp);
	return (data);
}
