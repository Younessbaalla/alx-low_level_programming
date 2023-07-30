#include <stdio.h>
#include "main.h"

/**
 * reverse_array - print content in reverse.
 *
 * @a: first parameter.
 * @n: second parameter.
 * Return: Always (0)
 */
void reverse_array(int *a, int n)
{
	int j;

	for (j = n; j >= 0; j--)
	{
		printf("%d", *(a + j));
	}
}
