#include "lists.h"
/**
 * insert_dnodeint_at_index - .............
 * @h:the header.
 * @idx: the index.
 * @n:the number.
 * Return:the adress of the new node or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t)), *ptr2 = *h;
	unsigned int i = 0;

	if (!ptr)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	ptr->n = n;
	while (i < idx - 1)
	{
		if (!ptr2)
		{
			free(ptr);
			return (NULL);
		}
		ptr2 = ptr2->next;
		i++;
	}
	if (!ptr2)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr2->next == NULL)
		return (add_dnodeint_end(h, n));
	ptr->next = ptr2->next;
	ptr->prev = ptr2;
	if (ptr2->next)
		ptr2->next->prev = ptr;
	ptr2->next = ptr;
	return (ptr);
}
