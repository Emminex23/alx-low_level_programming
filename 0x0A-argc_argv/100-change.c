#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of arguments
 * @argv: number of vector
 *
 * Return: 0 at success
 */
int main(int argc, char **argv)
{
	int cents, count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	count = 0;
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			count += 1;
		} else if (cents >= 10)
		{
			cents -= 10;
			count += 1;
		} else if (cents >= 5)
		{
			cents -= 5;
			count += 1;
		} else if (cents >= 2)
		{
			cents -= 2;
			count += 1;
		} else
		{
			cents -= 1;
			count += 1;
		}
	}
	printf("%d\n", count);
	return (0);
}
