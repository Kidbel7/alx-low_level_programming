#include "lists.h"

/**
 * free_listint_safe - frees a `listint_t` list
 * @h: head of list
 * Return: size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t list = 0;
	listint_t *temp;
	int i;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			list++;
		}
		else
		{
			free(*h);
			*h = NULL;
			list++;
			break;
		}
	}
	*h = NULL;
	return (list);
}
