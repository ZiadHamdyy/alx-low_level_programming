#include "lists.h"
/**
 * free_listint -  frees a listint_t list.
 * @head:the beginning of a list_t list.
 * Return:void.
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
