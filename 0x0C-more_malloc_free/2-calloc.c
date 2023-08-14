#include "main.h"
/**
 * _calloc - function that allocates memory for an array,
 * using malloc.
 * @nmemb: number of elements in ther array
 * @size: size of array
 *
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * sizeof(size));
	if (ptr ==NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
