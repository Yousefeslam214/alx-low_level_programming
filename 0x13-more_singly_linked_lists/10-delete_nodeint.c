#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *current = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 1; i <= index; i++)
	{
		if (i == index)
		{
			current = temp->next;
			temp->next = temp->next->next;
			free(current);
			return (1);
		}
		if (!temp)
			return (-1);
		temp = temp->next;
	}
	return (-1);
}
