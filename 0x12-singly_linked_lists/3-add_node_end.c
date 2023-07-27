#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end.
 * @head: Address of the first node.
 * @str: Address of a string to insert in the new node.
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp1, *temp2;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	temp1 = malloc(sizeof(list_t));
	if (temp1 == NULL)
		return (NULL);

	temp1->str = strdup(str);
	if (temp1->str == NULL)
	{
		free(temp1);
		return (NULL);
	}

	while (str[length])
		length++;

	temp1->len = length;
	temp1->next = NULL;

	if (*head == NULL)
	{
		*head = temp1;
		return (temp1);
	}

	temp2 = *head;
	while (temp2->next)
		temp2 = temp2->next;

	temp2->next = temp1;
	return (temp1);
}
