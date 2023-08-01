#include <string.h>
#include "main.h"

int is_palindrome(char *s);

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */

int main(void)
{
	int r;

	r = is_palindrome("level");

	if (r == 1)
		printf("Is a palindrome.\n");
	else
		printf("Is not a palindrome.\n");

	return (0);
}

/**
 * is_palindrome - checks if str is palindrome.
 * @s: str.
 *
 * Return: 1, if not 0.
 */
int is_palindrome(char *s)
{
	int i, j;

	i = strlen(s) / 2;
	j = strlen(s);

	if (s[i] == s[j - i - 1])
		return (1);
	return (0);
}
