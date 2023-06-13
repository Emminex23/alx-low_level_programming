#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: pointer to array of string
 * @n: number of elements of the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;
	int l = (n - 1);

	for (i = 0, j = l; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
