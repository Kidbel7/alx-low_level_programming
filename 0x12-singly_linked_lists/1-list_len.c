#include "lists.h"

/**
 * list_len - returns the number of elements in a linked `list_t` list
 * @h: head of linked list
 * Return:  number elements of linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
