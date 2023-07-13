#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - cause normal process termination with a status value of 98
 * @b: allocated memory
 * return: a pointer to the allocated memory(b).
 */
void *malloc_checked(unsigned int b)
{
	void *j;

	j = malloc(b);
	if (j == NULL)
		exit(98);
	return (j);
}
