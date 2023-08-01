#include <stdlib.h>
#include <stdio.h>

/**
 * main - Adds positive numbers.
 *
 * @argv: argument vector.
 * @argc: argument count.
 *
 * Return: return 0, if an error 1.
 */
int main(int argc, char *argv[])
{
	int j, i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	for (j = 1; j < argc; j++)
	{
		for (i = 0; argv[j][i] != '\0'; i++)
		{
			if (!((argv[j][i] >= '0' && argv[j][i] <= '9')
					|| argv[j][i] == 45))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[j]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
