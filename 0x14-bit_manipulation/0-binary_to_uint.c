#include "main.h"
#define NULL ((void *) 0)

/**
 * _strlen - finds the length of a string
 * @str: pointer to the str
 *
 * Return: length of the str
 */
int _strlen(const char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _strlen(str + 1));
}

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number,
 * or 0 if:
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int multiplier = 1;
	const char *end = b + (_strlen(b) - 1);

	if (b == NULL)
	{
		return (0);
	}

	while (end >= b)
	{
		if (*end == '1')
		{
			result += multiplier;
		} else if (*end != '0')
		{
			return (0);
		}
		end--;
		multiplier *= 2;
	}
	return (result);
}
