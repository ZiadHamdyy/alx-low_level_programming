#include "lists.h"
/**
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr, *t;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	ptr = *head;
	while (ptr)
	{
		if (i == index)
		{
			t->next = ptr->next;
			free(ptr);
			return (1);
		}
		i++;
		t = ptr;
		ptr = ptr->next;
	}
	return (-1);
}
