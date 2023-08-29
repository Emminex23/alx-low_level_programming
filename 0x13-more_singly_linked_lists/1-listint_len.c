#include "lists.h"
/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list.
 * @h: head of list
 *
 * Return: number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	int num_node = 0;

	while (h)
	{
		num_node++;
		h = h->next;
	}
	return (num_node);
}
