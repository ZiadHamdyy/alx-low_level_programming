#include "lists.h"
/**
 * delete_dnodeint_at_index - ..............
 * @head:the header.
 * @index:the index we free.
 * Return:1 or -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int i = 0;

	if (!ptr)
		return (-1);
	if (index < i)
		return (-1);
	if (index == 0)
	{
		*head = ptr->next;
		if (*head)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}

	while (i < index)
	{
		if (!ptr)
			return (-1);
		ptr = ptr->next;
		i++;
	}
	if (!ptr)
		return (-1);
	ptr->prev->next = ptr->next;
	if (ptr->next)
		ptr->next->prev = ptr->prev;

	free(ptr);
	return (1);
}
