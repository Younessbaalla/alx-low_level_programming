#include <stdio.h>
#include "main.h"

/**
 * print_error - checks if file can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: vector argument.
 *
 * Return: Nothing.
 */

void print_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copy content of a file to another.
 * @argc: number of arguments.
 * @argv: vector arguments.
 *
 * Return: Always (Zero).
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t numchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	print_error(file_from, file_to, argv);

	numchars = 1024;
	while (numchars == 1024)
	{
		numchars = read(file_from, buf, 1024);
		if (numchars == -1)
			print_error(-1, 0, argv);
		nwr = write(file_to, buf, numchars);
		if (nwr == -1)
			print_error(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
