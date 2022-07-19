#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a `listint_t` linked list
 * @head: head of list
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	i = temp->n;
	free(temp);
	return (i);
}
