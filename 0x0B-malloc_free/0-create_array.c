#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size:size of the array.
 * @c:the character.
 * Return:NULL if size = 0.
 * a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size)
	{
		size--;
		n[size] = c;
	}

	return (n);
}
