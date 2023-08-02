#include <stdio.h>
/**
 * fact - finds the factorial of an integer
 * @n: The integer
 *
 * Return: The result
 */
int fact(int n)
{
	int res = 1;
	int i;

	for (i = 1; i <= n; i++)
	{
		res *= i;
	}
	return (res);
}

/**
 * main - Entry point of the program
 *
 *
 * Return: 0 at success
 */
int main(void)
{
	int y = fact(5);

	printf("5! = %d\n", y);
	return (0);
}

