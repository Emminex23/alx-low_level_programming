#include <stdio.h>
/**
 * recurs - recursive function finding factorial of an int
 * @n: The int
 *
 * Return: The factorial
 */
int recurs(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (n * recurs(n - 1));
}

/**
 * main - Entry point of the program
 *
 * Return: 0 at success
 */
int main(void)
{
	int y;

	y = recurs(5);
	printf("5! = %d\n", y);
	return (0);
}
