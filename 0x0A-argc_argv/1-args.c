#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 at success
 */
int main(int argc, char *argv[] __attribute((unused)))
{
	int i, sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (i != 0)
		{
			sum += 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
