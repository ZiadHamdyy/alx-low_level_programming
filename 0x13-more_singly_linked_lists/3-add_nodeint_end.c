#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t list.
 * @head:the beginning of a list_t list.
 * @n:the number in the new node.
 * Return:the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t)), *ptr = *head;

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
	ptr->next = node;
	}
	return (node);
}
