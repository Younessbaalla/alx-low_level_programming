#include "main.h"

/**
 * _putchar - writes a character to the standard output
 * @c: the character to be written
 * Return: On success, the character written is returned.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
