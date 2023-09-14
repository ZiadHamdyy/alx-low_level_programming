#include "lists.h"
/**
 * get_dnodeint_at_index - ..............
 * @head: the header.
 * @index:is the index of the node, starting from 0
 * Return:if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
