#include "3-calc.h"

/**
 * op_add - adds two ints
 * @a: first int
 * @b: second int
 *
 * Return: sum of both ints
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference between two ints
 * @a: first int
 * @b: second int
 *
 * Return: difference of both ints
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two ints
 * @a: first int
 * @b: second int
 *
 * Return: product of both ints
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two ints
 * @a: first int
 * @b: second int
 *
 * Return: result of div of both ints
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus of 2 ints
 * @a: first int
 * @b: second int
 *
 * Return: remainder of the div of both ints
 */
int op_mod(int a, int b)
{
	return (a % b);
}
