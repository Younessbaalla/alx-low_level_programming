#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: A pointer to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null-terminated. Returns NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0;
	char *result;

	if (s1 != NULL)
	{

		for (len1 = 0; s1[len1] != '\0'; len1++)
			;
	}

	if (s2 != NULL)
	{

		for (len2 = 0; s2[len2] != '\0'; len2++)
			;

	}

	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
		result[i] = s2[j];

	result[i] = '\0';

	return (result);
}
