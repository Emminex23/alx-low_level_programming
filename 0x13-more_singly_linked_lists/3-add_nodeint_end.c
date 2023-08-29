#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the
 * end of a listint_t list.
 * @head: pointer to head
 * @n: arg
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *last_node = *head;

	tmp = (listint_t *)malloc(sizeof(listint_t));
	if (!tmp)
	{
		return (NULL);
	}

	tmp->n = n;
	tmp->next = NULL;

	if (!*head)
	{
		*head = tmp;
		return (tmp);
	}

	while (last_node->next)
	{
		last_node = last_node->next;
	}
	last_node->next = tmp;
	return (tmp);
}
