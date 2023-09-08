#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: pointer to the str
 *
 * Return: length of the str
 */
int _strlen(const char *str)
{
	if (!str)
	{
		return (0);
	}
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
	unsigned int result;
	unsigned int multiplier;
	const char *end;

	if (!b)
	{
		return (0);
	}

	result = 0;
	multiplier = 1;
	end = b + (_strlen(b) - 1);

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
