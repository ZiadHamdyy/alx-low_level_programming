#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - fills memory with a constant byte.
 * @s:a string.
 * @b:a char that we will fill with.
 * @n:the number we will fill.
 * Return:a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb:size bytes each.
 * @size:a size to  allocate.
 * Return:If nmemb or size is 0, then _calloc returns NULL.
 * If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);

}
