#include "main.h"
/**
 * _strcmp - Function that compares to strings
 * @s1: first string
 * @s2: second string
 *
 * Return: An integer:
 * < 0 if s1 is less than s2
 * = 0  if s1 matches s2
 * > 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}
