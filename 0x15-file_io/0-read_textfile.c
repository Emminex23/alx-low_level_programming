#include "main.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: The text file to read
 * @letters: the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int read_bytes, written_bytes;
	char *buffer = malloc(letters * sizeof(char));

	if (!buffer)
	{
		return (0);
	}
	if (!filename)
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	close(fd);
	free(buffer);

	if (written_bytes == -1 || written_bytes != read_bytes)
	{
		free(buffer);
		return (0);
	}
	return (read_bytes);
}
