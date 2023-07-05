#include "main.h"

/**
 * _putchar - writes a character to the standard output
 * @c: the character to be written
 * Return: On success, the character written is returned.
 * _print_rev_recursion - prints a string in reverse
 * @s: The string
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
