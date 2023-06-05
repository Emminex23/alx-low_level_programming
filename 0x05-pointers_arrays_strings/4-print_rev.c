#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to string to reverse
 *
 * Return: Nothing
 */
int len(char *s);
void print_rev(char *s)
{
	int length = len(s);
	int a;

	for (a = (length - 1); a >= 0; a--)
	{
		if (s[a] != '\0')
		{
			_putchar(s[a]);
		}
	}
	_putchar('\n');
}

/**
 * len - counts the characters in a string
 * @s: the string
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
