#include <unistd.h>
/**
 * _putchar - prints character c to stdout
 * @c: character to print to stdout
 *
 * Return: 1 on success
 * -1 on error, and the errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
