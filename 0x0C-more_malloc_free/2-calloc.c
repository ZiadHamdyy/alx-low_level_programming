#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb:size bytes each.
 * @size:a size to  allocate.
 * Return:If nmemb or size is 0, then _calloc returns NULL.
 * If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr = malloc(size);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == 0)
		return (NULL);
	return (ptr);

}
