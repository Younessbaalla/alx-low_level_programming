#include "lists.h"

/**
 * free_listp - Frees a linked list.
 * @head: head of a list.
 *
 * Return: Always (0).
 */

void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;

		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - Prints linked list.
 * @head: A pointer to the first node.
 *
 * Return: Nodes number in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hptr, *newnode, *addnode;

	hptr = NULL;

	while (head != NULL)
	{
		newnode = malloc(sizeof(listp_t));

		if (newnode == NULL)
			exit(98);

		newnode->p = (void *)head;
		newnode->next = hptr;
		hptr = newnode;

		addnode = hptr;

		while (addnode->next != NULL)
		{
			addnode = addnode->next;

			if (head == addnode->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nnodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}
	free_listp(&hptr);
	return (nnodes);
}
