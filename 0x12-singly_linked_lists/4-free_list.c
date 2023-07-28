#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 */
void free_list(list_t *head)
{
	list_t *n, *nn;
	if (!head)
		return;
	n = head;
	while (n)
	{
		nn = n->next;
		free(n->str);
		free(n);
		n = nn;
	}
}
