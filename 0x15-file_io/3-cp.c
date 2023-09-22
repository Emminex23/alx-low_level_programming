#include "main.h"
#include <stdio.h>
/**
 * exit_with_error - exits and prints appropriate errno
 * @msg: pointer to msg
 * @file: pointer to file
 * @code: the code
 *
 * Return: Nothing
 */
void exit_with_error(char *msg, char *file, int code)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, file);
	exit(code);
}
/**
 * main - program that copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 at success
 */
int main(int argc, char **argv)
{
	int from_fd, to_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd < 0)
		exit_with_error("Error: Can't read from file ", argv[1], 98);

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd < 0)
		exit_with_error("Error: Can't write to ", argv[2], 99);

	while ((bytes_read = read(from_fd, buffer, 1024)) > 0)
	{
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
			exit_with_error("Error: Can't write to ", argv[2], 99);
	}

	if (bytes_read < 0)
		exit_with_error("Error: Can't read from file ", argv[1], 98);

	if (close(from_fd) < 0)
		exit_with_error("Error: Can't close fd ", argv[1], 100);

	if (close(to_fd) < 0)
		exit_with_error("Error: Can't close fd ", argv[2], 100);
	return (0);
}
