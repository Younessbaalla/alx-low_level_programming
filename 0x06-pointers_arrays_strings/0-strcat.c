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
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (*dest != '\0')
	{
		dest++;
	}
	*dest = '\0';
	return (dest);
}
