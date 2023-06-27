#include "main.h"
/**
 * len - function that find the length of a string.
 * @s: Pointer to the string
 *
 * Return: The length of the string
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
 * is_palindrome_helper - helper function that checks
 * if a string is palindrome
 * @s: Pointer to the string
 * @start: Starting index
 * @end: Ending index
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome -  function that returns 1 if a string
 * is a palindrome and 0 if not
 * @s: Pointer to the string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int l = (len(s) - 1);

	return (is_palindrome_helper(s, 0, l));
}
