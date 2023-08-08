#include "main.h"
/**
 * _strlen - returns the length of a str
 * @str: pointer to the str
 *
 * Return: int
 */
int _strlen(char *str)
{
	int i, sum = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		sum += 1;
	}
	return (sum);
}

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: the string
 *
 * Return: pointer to a new string which is a duplicate of the string str
 * NULL if str = NULL
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = (char *) malloc(sizeof(_strlen(str) + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
