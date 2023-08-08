#include "main.h"
/**
 * _strlen - function that finds  the length of a string
 * @str: pointer to the str
 *
 * Return: the length of the str
 */
int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len += 1;
	}
	return (len);
}

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	ptr = (char *) malloc((_strlen(s1) + _strlen(s2) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = *(s1 + i);
	}
	for (j = 0; s2[j] != '\0'; i++, j++)
	{
		ptr[i] = *(s2 + j);
	}
	ptr[i] = '\0';
	return (ptr);
}
