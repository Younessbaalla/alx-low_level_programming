/**
 * print_sign - The function prints + or - or 0
 *
 * @n: The function takes an integer
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
