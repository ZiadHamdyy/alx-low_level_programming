#include "lists.h"
/**
 * add_dnodeint - ..............
 * @head:the header.
 * @n:the number
 * Return:the address of the new node or NULL is if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	ptr->n = n;
	ptr->next = *head;
	ptr->prev = NULL;
	(*head)->prev = ptr;
	*head = ptr;
	return (ptr);
}
