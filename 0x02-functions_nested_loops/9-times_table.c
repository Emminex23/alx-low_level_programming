#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i;
	int j;
	int r;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			r = (i * j);
			if (r > 9)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			} else
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(r + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
