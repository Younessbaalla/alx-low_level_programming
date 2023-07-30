#include <string.h>
#include "main.h"

/**
 * *_strncat - concatenate two strings.
 *
 * @dest: first parameter.
 * @src: second parameter.
 * @n: int.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j <= n; j += n)
	{
		while (*dest != '\0')
		{
			dest++;
		}
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src -= n;
		}
		while (*src != 0)
		{
			src -= n;
		}
		*dest = '\0';
	}
	return (dest);
}
