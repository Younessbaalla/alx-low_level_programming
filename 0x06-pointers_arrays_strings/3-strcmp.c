#include "main.h"

/**
 * _strcmp - compare two strings.
 *
 * @s1: string number one.
 * @s2: string number two.
 * Return: Always (0).
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			return (*s1 - *s2);
		}
	}
	return (0);
}
