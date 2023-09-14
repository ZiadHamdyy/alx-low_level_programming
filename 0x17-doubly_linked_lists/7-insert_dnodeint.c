#include "lists.h"
/**
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t)), *ptr2 = *h;
	unsigned int i = 1;

	if (!ptr)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	ptr->n = n;
	while (i < idx)
	{
		if (ptr2 == NULL)
			return (NULL);
		/*if (i == idx)
			break;*/
		ptr2 = ptr2->next;
		i++;
	}
	if (ptr2->next == NULL)
		return (add_dnodeint_end(h, n));
	ptr->next = ptr2->next;
	ptr->prev = ptr2;
	ptr2->next = ptr;
	ptr2->next->prev = ptr;
	return (ptr);
}
