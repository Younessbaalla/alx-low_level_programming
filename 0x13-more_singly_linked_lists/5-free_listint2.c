#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: pointer to the first element.
 *
 * Return: Always (Zero).
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *ap;

	if (head != NULL)
	{
		ap = *head;
		while ((temp = ap) != NULL)
		{
			ap = ap->next;
			free(temp);
		}
		*head = NULL;
	}
}
