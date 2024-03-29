#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to head
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
	{
		return;
	}

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
