#include "main.h"
/**
 * helper - checks for palindrome
 * @s: pointer to the string
 * @i: first int
 * @j: second int
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int helper(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	if (s[i] != s[j])
	{
		return (0);
	}
	return (helper(s, (i + 1), (j - 1)));
}

/**
 * len - length of a string
 * @s: pointer to the string
 *
 * Return: the length of the string
 */
int len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + len(s + 1));
}

/**
 * is_palindrome - checks for palindrome
 * @s: pointer to the string
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	return (helper(s, 0, (len(s)) - 1));
}
