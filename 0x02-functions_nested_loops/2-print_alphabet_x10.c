#include "main.h"
/**
 * print_alphabet_x10 - this functions prints the alphabets 10 times.
 * Return: the function does not return any value.
 */

void print_alphabet_x10(void)
{
	char j = 'a';
	int i = 0;


	while (i != 10)
	{
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		j = 'a';
		i++;
		_putchar('\n');
	}
}
