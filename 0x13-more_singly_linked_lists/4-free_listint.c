#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: head to pointer
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
