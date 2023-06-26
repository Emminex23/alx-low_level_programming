#include "main.h"
/**
 * _sqrt_recursion_helper - a function that helps another function
 * to return the natural square root of a number.
 * @n: The number
 * @x: Counter
 *
 * Return: The natural square root of n
 * If n does not have a natural square root, the function should return -1
 */
int _sqrt_recursion_helper(int n, int x)
{
	if ((x * x) > n)
	{
		return (-1);
	}
	if ((x * x) == n)
	{
		return (x);
	}
	return (_sqrt_recursion_helper(n, x + 1));
}

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * @n: The number
 *
 * Return: The natural square root of n
 * If n does not have a natural square root, the function should return -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 0));
}
