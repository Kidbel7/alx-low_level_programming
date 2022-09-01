#include "lists.h"

/**
 * sum_dlistint - sums all the data of a dlistint_t list
 * @head: the head of the dlistint_t list
 * Return: 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
