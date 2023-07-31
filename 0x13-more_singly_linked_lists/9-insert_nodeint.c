#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head:the beginning of a list_t list.
 * @idx:the index of the node.
 * @n:the data in the node.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *t;
	listint_t *ptr = malloc(sizeof(listint_t));
	unsigned int i = 0, j;

	t = *head;
	while (t != NULL)
	{
		t = t->next;
		i++;
	}
	if (i < idx)
		return (NULL);

	t = *head;
	for (j = 0; j < idx - 1; j++)
	{
		t = t->next;
	}
	ptr->next = t->next;
	t->next = ptr;
	ptr->n = n;
	return (ptr);
}
