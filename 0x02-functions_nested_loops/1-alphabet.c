#include "main.h"
/**
 * print_alphabet - this functions print the alphabets in lowercase.
 *
 *
 * Return: the function does not return any value.
 */

void print_alphabet(void)
{
	char j = 'a';

	while (j <= 'z')
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');
}
