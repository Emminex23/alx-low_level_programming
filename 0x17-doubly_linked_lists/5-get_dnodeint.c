#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the list
 * @index: index of the node, starting from 0
 *
 * Return: nth node; if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	if (!index)
	{
		return (NULL);
	}

	while (count != index)
	{
		count++;
		temp = temp->next;
	}
	return (temp);
}
