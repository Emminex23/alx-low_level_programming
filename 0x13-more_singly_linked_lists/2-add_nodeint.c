#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the
 * beginning of a listint_t list.
 * @head: pointer to the head
 * @n: second arg
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = (listint_t *)malloc(sizeof(listint_t));
	if (!tmp)
	{
		return (NULL);
	}

	tmp->n = n;

	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
