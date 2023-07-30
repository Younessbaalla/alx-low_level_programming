#include <string.h>
#include "main.h"

/**
 * *_strcat - concatenate a string.
 *
 * @dest: first string.
 * @src: second string.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
