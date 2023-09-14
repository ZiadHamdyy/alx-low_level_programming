#include "lists.h"
/**
 * add_dnodeint_end - ..............
 * @head:the header.
 * @n:the number
 * Return:the address of the new node or NULL is if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *ptr2 = *head;

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;

	if (*head == NULL)
	{
		ptr->prev = NULL;
		ptr->next = NULL;
		*head = ptr;
		return (*head);
	}
	while (ptr2->next != NULL)
		ptr2 = ptr2->next;

	ptr->prev = ptr2;
	ptr->next = NULL;
	ptr2->next = ptr;
	return (ptr);
}
