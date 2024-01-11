#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to head
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_el = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		num_el++;
		temp = temp->next;
	}
	return (num_el);
}
