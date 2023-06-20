#include "main.h"
/**
 * print_sign - the function prints + or - or 0
 *
 * @n: the function takes an integer
 *
 * Return: 1 if n is positive, 0 if equal to 0, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
