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
 * add_node - adds a new node a beginning of a `list_t` list
 * @head: pointer
 * @str:string
 * Return: the address of the new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);

	new->next = *head;
	*head = new;

	return (*head);
}
