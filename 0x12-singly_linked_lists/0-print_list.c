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
	if (h == NULL)
	{
		printf("[0] (nil)");
		return (i);
	}
	while (h != NULL)
	{
		printf("%s", h->str);
		h = h->next;
		i++;
	}
	return (i);
}
