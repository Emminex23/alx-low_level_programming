#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: the memory size to allocate
 *
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b * sizeof(*ptr));
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
	free(ptr);
	exit(0);
}
