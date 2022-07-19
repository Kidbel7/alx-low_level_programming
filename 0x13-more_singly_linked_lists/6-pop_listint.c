#include "lists.h"

/**
 * pop_listint - deletes the head node of a `listint_t` linked list
 * @head: head of list
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *tem;

	if (head == NULL || *head == NULL)
		return (0);
	tem = *head;
	*head = tem->next;
	i = tem->n;
	free(tem);
	return (i);
}
