#include”main.h”

/**
* _strlen_recursion - Returns the length of a string.
* @s: The string.
* Return: Always 0 (Success).
*/

int _strlen_recursion(char *s);
{
	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
