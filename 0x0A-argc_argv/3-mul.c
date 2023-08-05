#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 at success
 */
int main(int argc, char **argv)
{
	int i, mul;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mul);
	} else
	{
		printf("Error\n");
	}
	return (0);
}
