#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 * @head:the beginning of a list_t list.
 * Return:returns the sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
		return (0);

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
