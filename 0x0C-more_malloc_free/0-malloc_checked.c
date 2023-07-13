#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory and terminates the program
 * @b: Size of the memory to allocate
 *
 * Return: Pointer to the allocated memory.
 * If allocation fails, the program terminates with an exit status of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *j;

	j = malloc(b);
	if (j == NULL)
		exit(98);
	return (j);
}
