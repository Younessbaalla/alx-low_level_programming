#include <string.h>
#include "main.h"

/**
 * wildcmp - compare two strings.
 * @s1: First str.
 * @s2: Second str.
 *
 * Return: Always Zero.
 */
int wildcmp(char *s1, char *s2)
{
	int j;

	j = strcmp(s1, s2);

	if (s1[j] == s2[j])
		return (j);
	return (0);
}
