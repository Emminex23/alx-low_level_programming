#include "main.h"
/**
 * len - calculates trhe length of a string
 * @s: pointer to the string
 *
 * Return: The length of the string
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
 * *_strcat - a function that concatenates two strings.
 * @dest: destination
 * @src: source
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = len(dest);
	int src_len = len(src);

	for (i = 0; i < (src_len); i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
