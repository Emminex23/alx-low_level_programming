#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array
 * @n: number of elements in the array
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] != a[n - 1])
		{
			printf("%d, ", a[i]);
		} else
		{
			printf("%d\n", a[n - 1]);
		}
	}
}
