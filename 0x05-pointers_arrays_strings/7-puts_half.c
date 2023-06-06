#include "main.h"

/**
 * len - finds thr length of a string
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
 * puts_half - prints half of a string
 * @str: pointer to the string
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i, n;
	int length = len(str);

	if (length % 2 == 0)
	{
		n = length / 2;
	} else
	{
		n = (length - 1) / 2;
	}
	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
