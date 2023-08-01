#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block.
 *
 * @ptr: pointer to the previous allocated memory.
 * @new_size: new size of memory block.
 * @old_size: old size of previous memory.
 *
 * Return: the newly aloocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *oldp = ptr;
	unsigned int j, max = new_size;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (j = 0; j < max; j++)
		p[j] = oldp[j];
	free(ptr);
	return (p);
}
