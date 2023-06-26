#include "main.h"

/**
 * is_prime_number_helper - function that helps another function
 * to check for a prime number
 * @n: The number to check
 * @x: counter
 *
 * Return: 1 if prime number
 * 0 otherwise
 */
int is_prime_number_helper(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	if ((n % x) == 0)
	{
		return (0);
	}
	return (is_prime_number_helper(n, x - 1));
}
/**
 * is_prime_number - function that checks for a prime number
 * @n: The number to check
 *
 * Return: 1 if prime number
 * 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_number_helper(n, n / 2));
}
