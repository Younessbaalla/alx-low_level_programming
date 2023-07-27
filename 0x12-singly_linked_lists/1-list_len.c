#include "lists.h"

/**
 * list_len - returns the number of elements.
 * @h: pointer to the list.
 *
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	unsigned int counter = 0;
	const list_t *temp;

	temp = h;

	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
