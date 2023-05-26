#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the number to times
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j, r;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (n < 0 || n > 15)
			{
				return;
			}
			r = (i * j);
			if (r >= 100)
			{
				_putchar((r / 100) + '0');
				_putchar(((r / 10) % 10) + '0');
				_putchar((r % 10) + '0');
			} else if (r >= 10)
			{
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			} else
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(r + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
