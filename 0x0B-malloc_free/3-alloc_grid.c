#include "main.h"
/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: array width
 * @height: array height
 *
 * Return: 2 dimensional array of int
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **) malloc(width * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		ptr[i] = (int *) malloc(height * sizeof(int));
		if (ptr[i] == NULL)
		{
			return (NULL);
		}
	}

	for (k = 0; k < width; k++)
	{
		for (j = 0; j < height; j++)
		{
			ptr[k][j] = 0;
		}
	}
	return (ptr);
}