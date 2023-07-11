#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: a Pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			len++;
	}
	str = (char *)malloc((len + ac + 1) * sizeof(char));
	if (str == NULL)
	return (NULL);

	j = 0;
	for (i = 0; i < ac; i++)
	{
		s = av[i];
		k = 0;

	while (s[k])
	{
		str[j] = s[k];
		k++;
		j++;
	}
	str[j] = '\n';
	j++;
	}

	str[j] = '\0';

	return (str);
}
