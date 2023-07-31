#include "lists.h"

/**
 * listint_len - Returns the number of elements.
 *
 * @h: pointer to the list.
 *
 * Return: nodes number
 */

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
