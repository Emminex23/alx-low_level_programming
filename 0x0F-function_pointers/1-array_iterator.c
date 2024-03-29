#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array.
 * @array: the array
 * @size: the size of the array
 * @action: pointer to the function you need to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			*(array + i) = array[i];
			(*action)(array[i]);
		}
	}
}
