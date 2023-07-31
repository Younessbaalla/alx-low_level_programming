#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements.
 * @h: pointer to the list.
 *
 * Return: Nodes number
 */

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
