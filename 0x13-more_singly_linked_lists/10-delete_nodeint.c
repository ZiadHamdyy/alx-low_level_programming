#include "lists.h"
/**
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0, j = 0;
	listint_t *ptr;

	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		j++;
	}
	if (j < index)
		return (-1);
	ptr = *head;
	for (i = 0; i <= index; i++)
	{
		ptr = ptr->next;
	}
	free(ptr);
	return (1);
}
