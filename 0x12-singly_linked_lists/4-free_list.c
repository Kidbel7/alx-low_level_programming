#include "lists.h"
/**
 * free_list -  frees a `list_t` list
 * @head: pointer
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tem;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		tem = head->next;
		free(head->str);
		free(head);
		head = tem;
	}

	free(head->str);
	free(head);
}
