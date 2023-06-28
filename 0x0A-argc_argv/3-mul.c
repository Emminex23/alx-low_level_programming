#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 at success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int mul;

	if (argv[1] && argv[2])
	{
		mul = (atoi(argv[1])) * (atoi(argv[2]));
		printf("%d\n", mul);
	} else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
