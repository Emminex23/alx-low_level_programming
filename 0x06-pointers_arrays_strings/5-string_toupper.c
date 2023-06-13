#include "main.h"
/**
 * len - function that finds the length of a string
 * @str: pointer to the string
 *
 * Return: Length of the string
 */
int len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * string_toupper - function that changes all lowercase letters of a string
 * to uppercase.
 * @s: pointer to the string
 *
 * Return: Uppercase char
 */
char *string_toupper(char *s)
{
	int lent = len(s);
	int i;

	for (i = 0; i < lent; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
