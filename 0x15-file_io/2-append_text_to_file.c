#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wb;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd != -1)
	{
		if (text_content)
		{
			wb = write(fd, text_content, strlen(text_content));
			close(fd);
		}
	}
	return ((wb == -1) ? -1 : 1);
}
