#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to header
 * @idx: index of the list where the new node should be added
 * @n: data
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *temp2;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int position = 0;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}

	temp = *h;
	while ((temp->next) != NULL && position != idx)
	{
		temp = temp->next;
		position++;
	}
	temp2 = temp->next;
	temp->next = new_node;
	temp2->prev = new_node;
	new_node->prev = temp;
	new_node->next = temp2;

	return (new_node);
}
