#include "main.h"

/**
 * helper - checks for prime numbers
 * @n: input integer
 * @y: incrementer
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0
 */
int helper(int n, int y)
{
	if (n < 2)
	{
		return (0);
	}
	if (n % y == 0)
	{
		return (0);
	}
	if (y * y > n)
	{
		return (1);
	}
	return (helper(n, y + 1));
}
/**
 * is_prime_number - checks for prime numbers
 * @n: input integer
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0
 */
int is_prime_number(int n)
{
	return (helper(n, 2));
}
