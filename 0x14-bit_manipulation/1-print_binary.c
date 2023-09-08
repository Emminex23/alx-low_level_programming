#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: the number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long copy_n;
	int shifts = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	copy_n = n;
	while (copy_n != 0)
	{
		copy_n >>= 1;
		shifts++;
	}

	for (i = shifts - 1; i >= 0; i--)
	{
		if (((n >> i) & 1) == 1)
		{
			_putchar('1');
		} else
		{
			_putchar('0');
		}
	}
}
