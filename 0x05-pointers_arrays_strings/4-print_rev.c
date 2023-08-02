#include "main.h"
/**
 * len - find  the length of a string
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
 * print_rev - prints a string in reverse
 * @s: pointer to the string to reverse
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int length = len(s);
	int i;

	for (i = (length - 1); i >= 0; i--)
	{
		if (s[i] != '\0')
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
