#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter.
 *@str:a string.
 *Return:a pointer to the duplicated string.
 *NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	int size = 0, i;
	char *ar;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	size--;
	ar = malloc(size * sizeof(*str + 1));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = str[i];
	return (ar);
}
