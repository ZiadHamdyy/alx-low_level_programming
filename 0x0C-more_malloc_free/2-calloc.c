#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
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
