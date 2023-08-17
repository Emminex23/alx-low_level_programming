#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array to search
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which the
 * cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, s;

	if (!(array && cmp))
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		s = (*cmp)(array[i]);

		if (s)
		{
			return (i);
		}
	}
	return (-1);
}
