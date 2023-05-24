#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char i;
	int n = 0;

	while (n < 10)
	{
		i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		n++;
		_putchar('\n');
	}
}
