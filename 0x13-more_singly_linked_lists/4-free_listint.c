#include "lists.h"

/**
 * free_listint - Frees allocated memory.
 *
 * @head: pointer to the first element.
 *
 * Return: Always (zero).
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
