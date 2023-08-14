#include "main.h"
/**
 * array_range - function that creates an array of integers.
 * @min: minimum element
 * @max: maximum element
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int i, *ptr;
	int j = ((max - min) + 1);

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(j * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		ptr[i] = (min + i);
	}
	return (ptr);
}
