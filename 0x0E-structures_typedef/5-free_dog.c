#include "dog.h"
/**
 * free_dog - function that frees dogs.
 * @d: dog
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}