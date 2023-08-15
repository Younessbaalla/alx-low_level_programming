#include "main.h"

/**
 * append_text_to_file - Add text to an existing file.
 * @filename: file name.
 * @text_content: text to write inside the file.
 *
 * Return: 1 if text_content was added, else -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd_open;
	int numletters;
	int pwr;

	if (filename == NULL)
		return (-1);

	fd_open = open(filename, O_WRONLY | O_APPEND);

	if (fd_open == -1)
		return (-1);

	if (text_content)
	{
		for (numletters = 0; text_content[numletters]; numletters++)
			;

		pwr = write(fd_open, text_content, numletters);

		if (pwr == -1)
			return (-1);
	}

	close(fd_open);

	return (1);
}
