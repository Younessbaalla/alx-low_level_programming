#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a new node at the beginning.
 * @head: double pointer to node.
 * @str: string.
 *
 * Return: Always 0
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;

	while (str[len])
	{
		len++;
		new = malloc(sizeof(list_t));
	}
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
