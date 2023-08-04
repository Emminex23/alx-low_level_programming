#include "main.h"
/**
 * wildcmp - function that compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: 1 if the strings can be considered identical,
 * otherwise 0.
 */

int wildcmp(char *s1, char *s2)
{
	/* If both strings are at '\0' character, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	/**
	 * If the characters are the same, move to the
	 * next character in both strings
	 */
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
		{
			return (1);
		}
	}
	return (0);
}
