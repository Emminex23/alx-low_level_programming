#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @s: Pointer to the string
 *
 * Return: The encoded string
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			{
				s[i] += 13;
			} else
			{
				s[i] -= 13;
			}
		}
	}
	return (s);
}
