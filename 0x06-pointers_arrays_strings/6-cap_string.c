#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @s: pointer to the string
 *
 * Return: New capitalized string
 */
char *cap_string(char *s)
{
	int i;
	int newWord;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '.'
		|| s[i] == '?' || s[i] == '!' || s[i] == ';' || s[i] == '"' ||
		s[i] == ')' || s[i] == '(' || s[i] == '{' || s[i] == '}' ||
		s[i] == ',')
		{
			newWord = 1;
		} else if (newWord && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
			newWord = 0;
		} else
		{
			newWord = 0;
		}
	}
	return (s);
}
