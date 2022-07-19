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
	listint_t *tem;

	if (!head || !*head)
		return (0);
	i = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;
	return (i);
}
