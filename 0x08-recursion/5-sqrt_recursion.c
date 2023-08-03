#include "main.h"

/**
 * helper - helps to increment y
 * @n: the number whose sqrt we want to find
 * @y: The number of time to increment
 *
 * Return:-1 if n doesn't have natural sqrt
 * Otherwise the sqrt
 */
int helper(int n, int y)
{
	if (y * y > n)
	{
		return (-1);
	}
	if ((y * y) == n)
	{
		return (y);
	}
	return (helper(n, y + 1));
}

/**
 * _sqrt_recursion - function that returns the
 * natural square root of a number.
 * @n: the number
 *
 * Return: -1 if n doesn't have natural sqrt
 * Otherwise the sqrt
 */
int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
