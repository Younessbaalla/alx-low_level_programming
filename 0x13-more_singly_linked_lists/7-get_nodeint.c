#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node.
 *
 * @index: inde of the node.
 * @head:pointer to the first node.
 *
 * Return: return NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
