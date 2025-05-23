#include "main.h"

/**
 * append_text_to_file- appends text to the end of a file
 * @filename: the name of the file
 * @text_content: content to append
 * Return: 1 if successful or -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;
	ssize_t wr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (-1);

	while (text_content[len])
		len++;

	wr = write(fd, text_content, len);
	if (wr == -1 || wr != len)
		return (-1);
	close(fd);
	return (1);
}
