#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two positive numbers.
 * @argc: number of arguments passed to a program.
 * @argv: characters in an argument.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int n, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (n = 1; n < argc; n++)
	{
		for (j = 0; argv[n][j] != '\0'; j++)
		{
			if (argv[n][j] > 57 || argv[n][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
