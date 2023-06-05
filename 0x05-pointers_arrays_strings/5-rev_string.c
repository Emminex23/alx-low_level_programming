#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string
 *
 * Return: Always 0
 */
int len(char *s);
void rev_string(char *s)
{
	int i, j, tmp;
	int length = len(s);

	for (i = 0, j = (length - 1); i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}

/**
 * len - finds the length of a string
 * @s: pointer to the stringi
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
