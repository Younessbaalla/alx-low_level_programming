/**
 * _islower - a function that checks if a char is lowercase or not.
 *
 * @c: c is the character we want to check.
 *
 * Return: the function returns (1) if the char is lowercase and (0) if not.
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
