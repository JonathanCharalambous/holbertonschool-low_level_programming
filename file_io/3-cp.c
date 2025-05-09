#include <stdio.h>
#include "main.h"

#define BUFFER_SIZE 1024


/**
 * _error - prints an error message with the code
 * @code: The exit code
 * @msg: The error message
 * @arg: argument for error message
 * Return: void
 */
void _error(int code, const char *msg, const char *arg)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

/**
 * _close - closes a file
 * @fd: the file descriptor to close
 * Return: void
 */

void _close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * _copy - copies one file into another
 * @src_name: the source file
 * @dst_name: the destination file
 * Return: void
 */

void _copy(const char *src_name, const char *dst_name)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	int fd_src, fd_dst;

	fd_src = open(src_name, O_RDONLY);
	if (fd_src == -1)
		_error(98, "Error: Can't read from file %s\n", src_name);
	bytes_read = read(fd_src, buffer, BUFFER_SIZE);
	if (bytes_read == -1)
	{
		_close(fd_src);
		_error(98, "Error: Can't read from file %s\n", src_name);
	}
	fd_dst = open(dst_name, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dst == -1)
	{
		_close(fd_src);
		_error(99, "Error: Can't write to %s\n", dst_name);
	}
	while (bytes_read > 0)
	{
		bytes_written = write(fd_dst, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			_close(fd_src);
			_close(fd_dst);
			_error(99, "Error: Can't write to %s\n", dst_name);
		}

		bytes_read = read(fd_src, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			_close(fd_src);
			_close(fd_dst);
			_error(98, "Error: Can't read from file %s\n", src_name);
		}
	}
	_close(fd_src);
	_close(fd_dst);
}

/**
 * main - entry point for program
 * @argc: number of args
 * @argv: argument array
 * Return: 0 if success or an exit code
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_copy(argv[1], argv[2]);

	return (0);
}
