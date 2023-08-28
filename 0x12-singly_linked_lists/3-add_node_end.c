#include "lists.h"
#include <string.h>
/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 * @head: pointer to head
 * @str: pointer to str
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *last = *head;

	tmp = (list_t *) malloc(sizeof(list_t));
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
	tmp->next = NULL;

	if (!*head)
	{
		*head = tmp;
		return (tmp);
	}

	while(last->next != NULL)
	{
		last = last->next;
	}
	last->next = tmp;
	return (tmp);
}