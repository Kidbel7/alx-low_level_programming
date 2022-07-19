#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index `index` of
 * a `listint_t` linked list
 * @head: head of list
 * @index: the index of the node that should be deleted
 * Return: 1 if succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current;
	listint_t *next;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
