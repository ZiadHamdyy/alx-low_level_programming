#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head:the beginning of a list_t list.
 * @index:is the index of the node, starting at 0
 * Return:the nth node of a listint_t linked lis
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index ; i++)
	{
		ptr = head->next;
	}
	return (ptr);
}
