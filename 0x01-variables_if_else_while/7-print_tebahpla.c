#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (At Success)
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
