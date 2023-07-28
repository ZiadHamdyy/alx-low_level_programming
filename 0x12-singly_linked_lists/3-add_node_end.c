#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head:the beginning of a list_t list.
 * @str:a string.
 * Return:the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current = *head;

	if (str == NULL)
		return (NULL);

	if (!new_node || !head)
		return (NULL);

	if (str)
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = strlen(new_node->str);
	}
	if (current)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
