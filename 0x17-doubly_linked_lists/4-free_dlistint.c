#include "lists.h"
/**
 * free_dlistint - ............
 * @head:the header.
 * Return:void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (head)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;

	}
}
