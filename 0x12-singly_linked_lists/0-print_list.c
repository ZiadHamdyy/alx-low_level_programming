#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h:a pointer to the struct.
 * Return:the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *ptr = h;

	if (h == NULL)
	{
		return (-1);
	}
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
