#include "lists.h"

/**
 * pop_listint - Deletes head node of linked list
 *
 * @head: The pointer to first element in the linked list
 *
 * Return: Always Zero.
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);

}
