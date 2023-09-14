#include "lists.h"
/**
 * print_dlistint - ..........
 * @h:the header.
 * Return:the number of the nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
