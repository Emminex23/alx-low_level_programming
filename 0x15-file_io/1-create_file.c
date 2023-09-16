#include "main.h"

/**
 * _strlen - length of the string
 * @str: the string
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _strlen(str + 1));
}

/**
 * create_file - function that creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	if (!text_content)
	{
		open(filename, O_RDONLY | O_CREAT, 0600);
	}

	if (text_content)
	{
		fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		if (fd == -1)
		{
			return (-1);
		}

		write(fd, text_content, _strlen(text_content));
		close(fd);
		return (1);
	}
	return (-1);
}
