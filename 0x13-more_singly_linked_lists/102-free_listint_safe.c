#include "lists.h"

/**
 * free_listp2 - Frees a linked list.
 * @head: pointer to the first node.
 *
 * Return: Nothing.
 */

void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *currnode;

	if (head != NULL)
	{
		currnode = *head;

		while ((temp = currnode) != NULL)
		{
			currnode = currnode->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - Frees a linked list.
 * @h: A pointer to the first node.
 *
 * Return: size of list.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr, *newnode, *addnode;
	listint_t *currnode;

	hptr = NULL;

	while (*h != NULL)
	{
		newnode = malloc(sizeof(listp_t));

		if (newnode == NULL)
			exit(98);

		newnode->p = (void *)h;
		newnode->next = hptr;
		hptr = newnode;

		addnode = hptr;

		while (addnode->next != NULL)
		{
			addnode = addnode->next;

			if (*h == addnode->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
		}
		currnode = *h;
		*h = (*h)->next;
		free(currnode);
		nnodes++;
	}
	*h = NULL;
	free_listp2(&hptr);
	return (nnodes);
}
