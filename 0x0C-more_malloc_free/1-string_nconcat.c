#include "main.h"
/**
 * _strlen - length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
unsigned int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len += 1;
	}
	return (len);
}
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;

	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= _strlen(s2))
	{
		ptr = malloc(_strlen(s1) + _strlen(s2) + 1);
	} else
	{
		ptr = malloc(_strlen(s1) + n + 1);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = *(s1 + i);
	}
	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
	{
		ptr[i] = *(s2 + j);
	}
	ptr[i] = '\0';
	return (ptr);
}
