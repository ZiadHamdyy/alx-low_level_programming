#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: is a pointer to the memory previously allocated.
 * @old_size:s the size, in bytes, of the allocated space for ptr.
 * @new_size:is the new size, in bytes of the new memory block.
 * Return:If new_size == old_size do not do anything and return ptr.
 * If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL
 * Don’t forget to free ptr when it makes sense.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr1);

}
