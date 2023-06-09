#include "main.h"
/**
 * len - evaluates the length of a string
 * @s: pointer to the string
 * Return: The length of a string
 */
int len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: pointer to the resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = len(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}

