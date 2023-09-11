#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: first number
 * @m: number to flip to
 *
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int x;

	x = n ^ m;
	while (x)
	{
		count += (x & 1);
		x >>= 1;
	}
	return (count);
}
