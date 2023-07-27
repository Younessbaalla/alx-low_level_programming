#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees memory allocated to list.
 * @head: Address of the first node.
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
