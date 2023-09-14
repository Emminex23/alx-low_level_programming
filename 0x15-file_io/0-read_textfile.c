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
	size_t read_bytes;
	char *buffer = malloc(letters * sizeof(char));

	if (!buffer)
	{
		return (0);
	}
	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY | O_CREAT, 755);
	if (fd != -1)
	{
		read_bytes = read(fd, buffer, letters);
		write(STDOUT_FILENO, buffer, read_bytes);
		free(buffer);
	} else
	{
		return (0);
	}

	return (read_bytes);
}
