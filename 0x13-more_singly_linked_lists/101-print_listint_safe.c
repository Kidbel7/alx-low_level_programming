#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a `listint_t` linked list
 * @head: head of list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	long int i;

	while (head)
	{
		i = head - head->next;
		n++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (i > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (n);
}
