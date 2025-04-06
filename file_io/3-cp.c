#include <stdio.h>
#include "main.h"

#define BUFFER_SIZE 1024


void _error(int code, const char *msg, const char *arg)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

int _source(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		_error(98, "Error: Can't read from file %s\n", filename);
	return (fd);
}

int _destination(const char *filename)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd == -1)
		_error(99, "Error: Can't write to %s\n", filename);
	return (fd);
}

void _copy(int fd_src, int fd_dst, const char *src_name, const char *dst_name)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_src, buffer, BUFFER_SIZE)) != 0)
	{
		if (bytes_read == -1)
		{
			close(fd_src);
			close(fd_dst);
			_error(98, "Error: Can't read from file %s\n", src_name);
		}

		bytes_written = write(fd_dst, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_src);
			close(fd_dst);
			_error(99, "Error: Can't write to %s\n", dst_name);
		}
	}
}

void _close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

int main(int argc, char *argv[])
{
	int fd_src;
	int fd_dst;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_src = _source(argv[1]);
	fd_dst = _destination(argv[2]);

	_copy(fd_src, fd_dst, argv[1], argv[2]);

	_close(fd_src);
	_close(fd_dst);

	return (0);
}
