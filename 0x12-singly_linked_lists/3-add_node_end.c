#include "lists.h"

/**
 * _strlen - length of a string
 * @s: A pointer to an int that will be updated
 * Return: void
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * add_node_end -  adds a new node at the end of a `list_t` list
 * @head: pointer
 * @str: string
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last_node = *head;

	new = malloc(sizeof(list_t));


	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new;

	return (*head);
}
