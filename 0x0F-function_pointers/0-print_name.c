#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 * @name: pointer to name
 * @f: function to pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name && f)
	{
		exit(1);
	}
	(*f)(name);
}
