#include <stdio.h>

/**
 * main - Entry point to the program
 * @argc: Argument count
 * @argv: Argment vector
 *
 * Return: 0 at success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
