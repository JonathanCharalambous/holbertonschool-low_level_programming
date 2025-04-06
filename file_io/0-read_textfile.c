#include "main.h"

/**
 * read_textfile - reads a textfile
 * @filename: name of the file we want to read
 * @letters: the amount of characters we need to print
 * Return: The contents of the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *c;
	ssize_t rd, wr;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);
	rd = read(fd, c, letters);
	if (rd == -1)
	{
		free(c);
		close(fd);
		return (0);
	}
	wr = write(STDOUT_FILENO, c, rd);
	if (wr == -1 || wr != rd)
	{
		free(c);
		close(fd);
		return (0);
	}
	free(c);
	close(fd);
	return (wr);
}
