#include "main.h"
/**
 * minimum - finds the minimum size between two sizes
 * @x: old size
 * @y: new size
 *
 * Return: the minimum size
 */
unsigned int minimum(unsigned int x, unsigned int y)
{
	if (x < y)
	{
		return (x);
	}
	return (y);
}

/**
 * _realloc - function that reallocates a memory
 * block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: Pointer to the new block of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, min_size;
	void *ptr2;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
	{
		return (NULL);
	}

	min_size = minimum(old_size, new_size);

	for (i = 0; i < min_size; i++)
	{
		((char *) ptr2)[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (ptr2);
}
