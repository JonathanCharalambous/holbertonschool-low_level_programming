#include "main.h"

/**
 * create_file - create a file
 * @filename: the name of the file
 * @text_content: the content to add to the file
 * Return: 1 if success -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		wr = write(fd, text_content, len);
		if (wr == -1 || wr != len)
			return (-1);
	}

	return (1);
}
