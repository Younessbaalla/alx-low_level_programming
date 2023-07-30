#include <string.h>
#include "main.h"

/**
 * *_strncpy - copy a string
 *
 * @dest: first parameter.
 * @src: second parmeter.
 * @n: int.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (*src != '\0')
	{
		src += n;
	}
	*dest = '\0';
	return (dest);
}
