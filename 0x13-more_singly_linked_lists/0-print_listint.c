#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}

