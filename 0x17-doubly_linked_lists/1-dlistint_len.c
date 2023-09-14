#include "lists.h"
/**
 * dlistint_len - ..........
 * @h:the header.
 * Return:the number of the nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
