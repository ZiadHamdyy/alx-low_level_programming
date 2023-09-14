#include "lists.h"
/**
 * sum_dlistint - ....
 * @head :the header.
 * Return:0 if it empty or the sum of the elements.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (!head)
		return (0);
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
