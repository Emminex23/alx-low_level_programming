#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 at success
 */
int main(void)
{
	int i;
	int n = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 15) == 0)
		{
			n += i;
		}
	}
	printf("%d\n", n);
	return (0);
}
