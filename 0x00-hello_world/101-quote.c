#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: 1
 */
int main(void)
{
	int fd = 2;
	const void *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t count = strlen(message);

	write(fd, message, count);
	return (1);
}
