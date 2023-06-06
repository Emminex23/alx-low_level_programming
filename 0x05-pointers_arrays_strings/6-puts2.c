#include "main.h"

/**
 * len - prints the length of a string
 * @s: pointer to the string
 *
 * Return: The length of  the string
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
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: pointer to the string
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

