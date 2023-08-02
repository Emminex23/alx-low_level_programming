#include <stdio.h>
/**
 * sumDigits - Finds the sum of digits in a number
 * @n: The number
 *
 * Return: sum of the digits
 */
int sumDigits(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return ((n % 10) + sumDigits(n / 10));
}

/**
 * main - Entry into the program
 *
 * Return: 0 at success
 */
int main(void)
{
	int y = sumDigits(256);

	printf("%d\n", y);
	return (0);
}
