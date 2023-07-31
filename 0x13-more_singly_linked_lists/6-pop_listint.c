#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head:the beginning of a list_t list.
 * Return: the head node’s data (n).
 * if the linked list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int n;

	if (*head == NULL)
		return (0);
	t = *head;
	*head = (*head)->next;
	n = t->n;
	free(t);
	return (n);
}
