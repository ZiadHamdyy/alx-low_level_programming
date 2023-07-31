#include "lists.h"
/**
 * listint_len - prints all the elements of a listint_t list.
 * @h:the beginning of a list_t list.
 * Return:the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
