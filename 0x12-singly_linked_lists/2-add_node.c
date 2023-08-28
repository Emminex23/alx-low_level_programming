#include "lists.h"
#include <string.h>
/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list.
 * @head: head of list
 * @str: pointer to str
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = (list_t *)malloc(sizeof(list_t));
	if (!tmp)
	{
		return (NULL);
	}

	tmp->str = strdup(str);
	if (!tmp->str)
	{
		free(tmp);
		return (NULL);
	}

	tmp->len = strlen(str);
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
